`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2022/10/17 19:41:15
// Design Name: 
// Module Name: testcode
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


module testcode();

    reg [31:0] i=0;
	reg [31:0] mem [0:128000]; //500KB constraint_mode
	
    initial begin
        //		fd = $fopen("./0001.mem","rb"); //jpeg file
        //		if(fd==0)begin
        //			$display("file not opened.\n");
        //			$finish;
        //		end
        
        $readmemh("0001.mem", mem);
        for(i=0; i<10; i=i+1)begin
            $display("%08x", mem[i]);
        end
        
        //$fclose(fd);
        $finish;
    end

endmodule
