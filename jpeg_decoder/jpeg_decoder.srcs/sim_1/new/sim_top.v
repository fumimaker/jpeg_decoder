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
	parameter clk_period = 2; //1clk=10ns@100MHz

	reg [31:0] mem [0:128000]; //500KB memory
	reg [31:0] mem2 [0:128000]; //500KB memory
	reg [31:0] mem3 [0:128000]; //500KB memory
	integer fd, fd2, fd3;
	integer frame = 0;

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
    integer i = 0, j = 0;
    parameter datasize = 1731;//52263;//(2060/4); //52263
    parameter datasize2 = 1570;
    parameter datasize3 = 2999;

	initial begin
       fd = $fopen("./outputraw.raw","w"); //jpeg file
        if(fd==0)begin
            $display("file not opened.\n");
            $finish;
        end
        
        fd2 = $fopen("./outputraw2.raw","w"); //jpeg file
        if(fd2==0)begin
            $display("file2 not opened.\n");
            $finish;
        end
        
        fd3 = $fopen("./outputraw3.raw","w"); //jpeg file
        if(fd3==0)begin
            $display("file3 not opened.\n");
            $finish;
        end

		$readmemh("0001.mem", mem);
		for(i=0; i<10; i=i+1)begin
			$display("%08x", mem[i]);
		end
		
		$readmemh("0002.mem", mem2);
		for(i=0; i<10; i=i+1)begin
			$display("%08x", mem2[i]);
		end
		
		$readmemh("0003.mem", mem3);
		for(i=0; i<10; i=i+1)begin
			$display("%08x", mem3[i]);
		end

		rst_i <= 1;
		#(clk_period*100); //wait 100clk
		rst_i <= 0;
		for(i=0; i<datasize; i=i+1)begin
		  if(i==1000)begin
			 for(j=0; j<1000; j=j+1)begin
			     inport_valid_i <= 0;
			     #(clk_period);
                end
			end
			if(i==1200)begin
			 for(j=0; j<1000; j=j+1)begin
			     inport_valid_i <= 0;
			     #(clk_period);
                end
			end
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
		inport_strb_i <= 4'hF;
		inport_last_i <= 1;
		#(clk_period);
		while(inport_accept_o==0)begin
			#(clk_period);
		end
		inport_last_i <= 0;
		inport_valid_i <= 0;
		
		while(idle_o==0)begin
		    #(clk_period);
		end
		
		frame <= frame + 1;
		
		for(i=0; i<datasize2; i=i+1)begin
			inport_valid_i <= 1;
			inport_data_i <= mem2[i]; //32bit
			inport_strb_i <= 4'b1111;
			inport_last_i <= 0;
			#(clk_period);
			while(inport_accept_o==0)begin
				#(clk_period);
			end
		end
		inport_valid_i <= 1;
		inport_data_i <= mem2[i]; //32bit
		inport_strb_i <= 4'hF;
		inport_last_i <= 1;
		
		while(idle_o==0)begin
		    #(clk_period);
		end
		
		frame <= frame + 1;
		
		for(i=0; i<datasize3; i=i+1)begin
			inport_valid_i <= 1;
			inport_data_i <= mem3[i]; //32bit
			inport_strb_i <= 4'b1111;
			inport_last_i <= 0;
			#(clk_period);
			while(inport_accept_o==0)begin
				#(clk_period);
			end
		end
		inport_valid_i <= 1;
		inport_data_i <= mem3[i]; //32bit
		inport_strb_i <= 4'hF;
		inport_last_i <= 1;
		
		#(clk_period);		
		
		
        $fclose(fd);
        $fclose(fd2);
        $fclose(fd3);
        while(idle_o==0)begin
            #(clk_period);
		end
		$finish;
	end

	always begin
		#(clk_period/2) clk_i = ~clk_i; //flip at half clock
	end

	always @(posedge clk_i)begin
		outport_accept_i <= 1;
		if(outport_valid_o==1)begin
		  if(frame==0)begin
			$fwrite(fd, "%h %h %h %h %h\n", outport_pixel_x_o, outport_pixel_y_o, outport_pixel_r_o, outport_pixel_g_o, outport_pixel_b_o);
//            $fwrite(fd, "%h %h %h\n", outport_pixel_r_o, outport_pixel_g_o, outport_pixel_b_o);
			$display("%h %h %h", outport_pixel_r_o, outport_pixel_g_o, outport_pixel_b_o);
            end else if(frame==1)begin
                $fwrite(fd2, "%h %h %h %h %h\n", outport_pixel_x_o, outport_pixel_y_o, outport_pixel_r_o, outport_pixel_g_o, outport_pixel_b_o);
//              $fwrite(fd, "%h %h %h\n", outport_pixel_r_o, outport_pixel_g_o, outport_pixel_b_o);
			     $display("%h %h %h", outport_pixel_r_o, outport_pixel_g_o, outport_pixel_b_o);
            end else if(frame==2)begin
                $fwrite(fd3, "%h %h %h %h %h\n", outport_pixel_x_o, outport_pixel_y_o, outport_pixel_r_o, outport_pixel_g_o, outport_pixel_b_o);
//              $fwrite(fd, "%h %h %h\n", outport_pixel_r_o, outport_pixel_g_o, outport_pixel_b_o);
			     $display("%h %h %h", outport_pixel_r_o, outport_pixel_g_o, outport_pixel_b_o);
            end
		end
	end

endmodule
