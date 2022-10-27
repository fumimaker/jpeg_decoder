// DESCRIPTION: Top level main for invoking jpeg decoder model
//
// Copyright (C) 2022, Tan Bin. This program is free software; you can
// redistribute it and/or modify it under the terms of either the GNU
// Lesser General Public License Version 3 or the Perl Artistic License
// Version 2.0.

#include <memory>
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdio>
#include <verilated.h>

// Include model header, generated from Verilating "jpeg_core.v"
#include "Vjpeg_core.h"

#if VM_TRACE
# include <verilated_vcd_c.h>	// Trace file format header
#endif

vluint64_t main_time = 0;	// Current simulation time (64-bit unsigned)

double sc_time_stamp () {	// Called by $time in Verilog
    return main_time;		// Note does conversion to real, to match SystemC
}

int main(int argc, char** argv) {

    if (argc < 3) {
        std::cerr << "Should specify jpeg file and output ppm file path" << std::endl;
        std::cerr << argv[0] << " <jpeg_file> <ppm_file> [verilator_options]" << std::endl;
        exit(1);
    }

    FILE *input = fopen(argv[1], "rb");
    uint8_t *inbuf = NULL;
    size_t len;
    if (input != NULL) {
        fseek(input, 0, SEEK_END);
        len = ftell(input);
        fseek(input, 0, SEEK_SET);
        if (len > 0) {
            inbuf = new uint8_t[len];
            if (inbuf != NULL) {
                fread(inbuf, len, 1, input);
            }
        }
        fclose(input);
    } else {
        std::cerr << "Can not open jpeg file " << argv[1] << std::endl;
        exit(1);
    }

    FILE *output = fopen(argv[2], "w");
    if (output != NULL) {
        fprintf(output, "P6\n");
    } else {
        std::cerr << "Can not open ppm file " << argv[2] << std::endl;
        exit(1);
    }

    const std::unique_ptr<VerilatedContext> context(new VerilatedContext);
    context->debug(0);
    context->randReset(2);
    context->commandArgs(argc, argv);
    // Construct the Verilated model, from Vjpeg_core.h generated from Verilating "jpeg_core.v"
    const std::unique_ptr<Vjpeg_core> decoder(new Vjpeg_core(context.get(), "JPEG_DECODER"));


#if VM_TRACE			// If verilator was invoked with --trace
     context->traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    decoder->trace (tfp, 99);	// Trace 99 levels of hierarchy, should be enough
    tfp->open ("decoder.vcd");	// Open the dump file
#endif

    decoder->rst_i = !0;
    decoder->clk_i = 0;
    decoder->inport_valid_i = !1;
    decoder->outport_accept_i = !1;
    decoder->inport_last_i = !1;

    size_t read = 0;
    size_t out_width, out_height, out_size = 0;
    uint8_t *out_r, *out_g, *out_b;

    VL_PRINTF("Decoding %s...\n", argv[1]);
    // Simulate until $finish
    while (!context->gotFinish()) {
        context->timeInc(1);
        decoder->clk_i = !decoder->clk_i;
        main_time++;

        if (decoder->clk_i) {
            if (context->time() < 10) {
                decoder->rst_i = !0; // Assert reset
            } else {
                decoder->rst_i = !1; // Deassert reset
                decoder->outport_accept_i = !0;
            }
        }

        // Evaluate model
        decoder->eval();

#if VM_TRACE
	    if (tfp) {
            tfp->dump(main_time);	// Create waveform trace for this timestamp
        }
#endif

        if (!decoder->rst_i && decoder->clk_i) { // Setup input data
            if (read < len) {
                uint32_t in_data = (inbuf[read + 3] << 24) | (inbuf[read + 2] << 16) | (inbuf[read + 1] << 8) | inbuf[read];
                decoder->inport_data_i = in_data;
                decoder->inport_strb_i = 0xf;
                decoder->inport_valid_i = !0;
                decoder->inport_last_i = !1;
            } else {
                decoder->inport_last_i = !0;
            }
            if (decoder->inport_accept_o && read < len) {
                read += sizeof(uint32_t);
            }
        }

        if (!decoder->rst_i && !decoder->clk_i) {
            if (decoder->outport_valid_o) { // Caputure output data
                if (out_size == 0) {
                    out_width = decoder->outport_width_o;
                    out_height = decoder->outport_height_o;
                    out_size = out_width * out_height;
                    out_r = new uint8_t[out_size];
                    out_g = new uint8_t[out_size];
                    out_b = new uint8_t[out_size];
                }
                const size_t pos = decoder->outport_pixel_y_o * out_width + decoder->outport_pixel_x_o;
                out_r[pos] = decoder->outport_pixel_r_o;
                out_g[pos] = decoder->outport_pixel_g_o;
                out_b[pos] = decoder->outport_pixel_b_o;
                if (pos == (out_size - 1)) {
                    VL_PRINTF("[%" PRId64 "] postion=%dX%d, exiting...\n",
                        context->time(), decoder->outport_pixel_x_o + 1, decoder->outport_pixel_y_o + 1);
                    break;
                }
            }
        }
    }

    // Final model cleanup
    decoder->final();

    // Save decoded raster data to ppm file
    if (output != NULL && out_size != 0) {
        fprintf(output, "%d %d\n", (int)out_width, (int)out_height);
        fprintf(output, "255\n");
        for (size_t y = 0; y < out_height; ++y) {
            size_t pos = y * out_width;
            for (size_t x = 0; x < out_width; ++x) {
                putc(out_r[pos], output);
                putc(out_g[pos], output);
                putc(out_b[pos], output);
                pos++;
            }
        }
        fclose(output);
    }

    // Release memory
    if (inbuf) delete [] inbuf;
    if (out_r) delete [] out_r;
    if (out_g) delete [] out_g;
    if (out_b) delete [] out_b;

#if VM_TRACE
     if (tfp) tfp->close();
#endif
    // Return good completion status
    return 0;
}
