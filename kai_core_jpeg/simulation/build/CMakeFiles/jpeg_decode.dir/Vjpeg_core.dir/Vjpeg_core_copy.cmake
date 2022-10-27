# Verilated -*- CMake -*-
# DESCRIPTION: Verilator output: CMake include script with class lists
#
# This CMake script lists generated Verilated files, for including in higher level CMake scripts.
# This file is meant to be consumed by the verilate() function,
# which becomes available after executing `find_package(verilator).

### Constants...
set(PERL "perl" CACHE FILEPATH "Perl executable (from $PERL)")
set(VERILATOR_ROOT "/usr/share/verilator" CACHE PATH "Path to Verilator kit (from $VERILATOR_ROOT)")

### Compiler flags...
# User CFLAGS (from -CFLAGS on Verilator command line)
set(Vjpeg_core_USER_CFLAGS )
# User LDLIBS (from -LDFLAGS on Verilator command line)
set(Vjpeg_core_USER_LDLIBS )

### Switches...
# SystemC output mode?  0/1 (from --sc)
set(Vjpeg_core_SC 0)
# Coverage output mode?  0/1 (from --coverage)
set(Vjpeg_core_COVERAGE 0)
# Threaded output mode?  0/1/N threads (from --threads)
set(Vjpeg_core_THREADS 0)
# VCD Tracing output mode?  0/1 (from --trace)
set(Vjpeg_core_TRACE_VCD 1)
# FST Tracing output mode? 0/1 (from --fst-trace)
set(Vjpeg_core_TRACE_FST 0)

### Sources...
# Global classes, need linked once per executable
set(Vjpeg_core_GLOBAL "${VERILATOR_ROOT}/include/verilated.cpp" "${VERILATOR_ROOT}/include/verilated_dpi.cpp" "${VERILATOR_ROOT}/include/verilated_vcd_c.cpp")
# Generated module classes, non-fast-path, compile with low/medium optimization
set(Vjpeg_core_CLASSES_SLOW )
# Generated module classes, fast-path, compile with highest optimization
set(Vjpeg_core_CLASSES_FAST "/mnt/c/Github/jpeg_decoder/kai_core_jpeg/simulation/build/CMakeFiles/jpeg_decode.dir/Vjpeg_core.dir/Vjpeg_core.cpp" "/mnt/c/Github/jpeg_decoder/kai_core_jpeg/simulation/build/CMakeFiles/jpeg_decode.dir/Vjpeg_core.dir/Vjpeg_core_jpeg_core.cpp" "/mnt/c/Github/jpeg_decoder/kai_core_jpeg/simulation/build/CMakeFiles/jpeg_decode.dir/Vjpeg_core.dir/Vjpeg_core_jpeg_idct__U1.cpp" "/mnt/c/Github/jpeg_decoder/kai_core_jpeg/simulation/build/CMakeFiles/jpeg_decode.dir/Vjpeg_core.dir/Vjpeg_core_jpeg_dqt.cpp" "/mnt/c/Github/jpeg_decoder/kai_core_jpeg/simulation/build/CMakeFiles/jpeg_decode.dir/Vjpeg_core.dir/Vjpeg_core_jpeg_output.cpp" "/mnt/c/Github/jpeg_decoder/kai_core_jpeg/simulation/build/CMakeFiles/jpeg_decode.dir/Vjpeg_core.dir/Vjpeg_core_jpeg_bitbuffer.cpp" "/mnt/c/Github/jpeg_decoder/kai_core_jpeg/simulation/build/CMakeFiles/jpeg_decode.dir/Vjpeg_core.dir/Vjpeg_core_jpeg_mcu_proc.cpp" "/mnt/c/Github/jpeg_decoder/kai_core_jpeg/simulation/build/CMakeFiles/jpeg_decode.dir/Vjpeg_core.dir/Vjpeg_core_jpeg_idct_ram__U1.cpp" "/mnt/c/Github/jpeg_decoder/kai_core_jpeg/simulation/build/CMakeFiles/jpeg_decode.dir/Vjpeg_core.dir/Vjpeg_core_jpeg_idct_transpose__U1.cpp" "/mnt/c/Github/jpeg_decoder/kai_core_jpeg/simulation/build/CMakeFiles/jpeg_decode.dir/Vjpeg_core.dir/Vjpeg_core_jpeg_output_y_ram.cpp" "/mnt/c/Github/jpeg_decoder/kai_core_jpeg/simulation/build/CMakeFiles/jpeg_decode.dir/Vjpeg_core.dir/Vjpeg_core_jpeg_output_cx_ram.cpp" "/mnt/c/Github/jpeg_decoder/kai_core_jpeg/simulation/build/CMakeFiles/jpeg_decode.dir/Vjpeg_core.dir/Vjpeg_core_jpeg_output_y_ram_ram_dp_512_9.cpp" "/mnt/c/Github/jpeg_decoder/kai_core_jpeg/simulation/build/CMakeFiles/jpeg_decode.dir/Vjpeg_core.dir/Vjpeg_core_jpeg_output_cx_ram_ram_dp_256_8.cpp" "/mnt/c/Github/jpeg_decoder/kai_core_jpeg/simulation/build/CMakeFiles/jpeg_decode.dir/Vjpeg_core.dir/Vjpeg_core_jpeg_idct_ram_dp.cpp" "/mnt/c/Github/jpeg_decoder/kai_core_jpeg/simulation/build/CMakeFiles/jpeg_decode.dir/Vjpeg_core.dir/Vjpeg_core_jpeg_idct_transpose_ram.cpp")
# Generated support classes, non-fast-path, compile with low/medium optimization
set(Vjpeg_core_SUPPORT_SLOW "/mnt/c/Github/jpeg_decoder/kai_core_jpeg/simulation/build/CMakeFiles/jpeg_decode.dir/Vjpeg_core.dir/Vjpeg_core__Syms.cpp" "/mnt/c/Github/jpeg_decoder/kai_core_jpeg/simulation/build/CMakeFiles/jpeg_decode.dir/Vjpeg_core.dir/Vjpeg_core__Trace__Slow.cpp")
# Generated support classes, fast-path, compile with highest optimization
set(Vjpeg_core_SUPPORT_FAST "/mnt/c/Github/jpeg_decoder/kai_core_jpeg/simulation/build/CMakeFiles/jpeg_decode.dir/Vjpeg_core.dir/Vjpeg_core__Dpi.cpp" "/mnt/c/Github/jpeg_decoder/kai_core_jpeg/simulation/build/CMakeFiles/jpeg_decode.dir/Vjpeg_core.dir/Vjpeg_core__Trace.cpp")
# All dependencies
set(Vjpeg_core_DEPS "../src_v/../src_v/jpeg_core.v" "../src_v/jpeg_bitbuffer.v" "../src_v/jpeg_dht.v" "../src_v/jpeg_dht_std_cx_ac.v" "../src_v/jpeg_dht_std_cx_dc.v" "../src_v/jpeg_dht_std_y_ac.v" "../src_v/jpeg_dht_std_y_dc.v" "../src_v/jpeg_dqt.v" "../src_v/jpeg_idct.v" "../src_v/jpeg_idct_fifo.v" "../src_v/jpeg_idct_ifast_x.v" "../src_v/jpeg_idct_ifast_y.v" "../src_v/jpeg_idct_ram.v" "../src_v/jpeg_idct_ram_dp.v" "../src_v/jpeg_idct_transpose.v" "../src_v/jpeg_idct_transpose_ram.v" "../src_v/jpeg_idct_x.v" "../src_v/jpeg_idct_y.v" "../src_v/jpeg_input.v" "../src_v/jpeg_mcu_id.v" "../src_v/jpeg_mcu_proc.v" "../src_v/jpeg_output.v" "../src_v/jpeg_output_cx_ram.v" "../src_v/jpeg_output_fifo.v" "../src_v/jpeg_output_y_ram.v" "/usr/bin/verilator_bin")
# User .cpp files (from .cpp's on Verilator command line)
set(Vjpeg_core_USER_CLASSES )
