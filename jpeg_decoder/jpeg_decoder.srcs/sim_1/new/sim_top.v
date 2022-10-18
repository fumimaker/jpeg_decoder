`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date: 2022/10/14 17:46:37
// Design Name:
// Module Name: sim_top
// Project Name:
// Target Devices:
// Tool Versions:
// Description:
//
// Dependencies:
//
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
//
//////////////////////////////////////////////////////////////////////////////////


module sim_top();
	parameter clk_period = 10; //1clk=10ns@100MHz

	reg [31:0] mem [0:128000]; //500KB memory
	integer fd;

	reg clk_i=1, rst_i;
	reg inport_valid_i, inport_last_i, outport_accept_i;
	reg [31:0] inport_data_i;
	reg [3:0] inport_strb_i;

	wire inport_accept_o, outport_valid_o, idle_o;
	wire [15:0] outport_width_o, outport_height_o, outport_pixel_x_o, outport_pixel_y_o;
	wire [7:0] outport_pixel_b_o, outport_pixel_r_o, outport_pixel_g_o;

	jpeg_core jpeg_core(
		// Inputs
		.clk_i(clk_i),
		.rst_i(rst_i),
		.inport_valid_i(inport_valid_i),
		.inport_data_i(inport_data_i),
		.inport_strb_i(inport_strb_i),
		.inport_last_i(inport_last_i),
		.outport_accept_i(outport_accept_i),

		// Outputs
		.inport_accept_o(inport_accept_o),
		.outport_valid_o(outport_valid_o),
		.outport_width_o(outport_width_o),
		.outport_height_o(outport_height_o),
		.outport_pixel_x_o(outport_pixel_x_o),
		.outport_pixel_y_o(outport_pixel_y_o),
		.outport_pixel_r_o(outport_pixel_r_o),
		.outport_pixel_g_o(outport_pixel_g_o),
		.outport_pixel_b_o(outport_pixel_b_o),
		.idle_o(idle_o));

    reg [31:0] cnt = 0;
    integer i = 0;
    parameter datasize = (209053/4); //52263

	initial begin
		$readmemh("0001.mem", mem);
		for(i=0; i<10; i=i+1)begin
			$display("%08x", mem[i]);
		end

		rst_i <= 1;
		#(clk_period*100); //wait 100clk
		rst_i <= 0;
		#(clk_period*100); //wait 100clk

		for(i=0; i<datasize; i=i+1)begin
			inport_valid_i <= 1;
			inport_data_i <= mem[i]; //32bit
			inport_strb_i <= 4'b1111;
			inport_last_i <= 0;
			#(clk_period);
			while(inport_accept_o==0)begin
				#(clk_period);
			end
		end
		inport_valid_i <= 1;
		inport_data_i <= mem[i]; //32bit
		inport_strb_i <= 4'b0001;
		inport_last_i <= 1;
		while(inport_accept_o==0)begin
			#(clk_period);
		end

		$finish;
	end

	always begin
		#(clk_period/2) clk_i = ~clk_i; //flip at half clock
	end

	always @(posedge clk_i)begin
		fd = $fopen("./outputraw.raw","w"); //jpeg file
		if(fd==0)begin
			$display("file not opened.\n");
			$finish;
		end
		outport_accept_i <= 1;
		if(outport_valid_o==1)begin
			$fwrite(fd, "%c%c%c", outport_pixel_r_o, outport_pixel_g_o, outport_pixel_b_o);
			$display("%h %h %h", outport_pixel_r_o, outport_pixel_g_o, outport_pixel_b_o);
		end
		$fclose(fd);
	end

endmodule
