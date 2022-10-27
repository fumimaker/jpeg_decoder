// DESCRIPTION: row inverse DCT, Chen-Wang algorithm
//
// Copyright (C) 2022, Tan Bin. This program is free software; you can
// redistribute it and/or modify it under the terms of either the GNU
// Lesser General Public License Version 3 or the Perl Artistic License
// Version 2.0.

module jpeg_idct_ifast_x
//-----------------------------------------------------------------
// Params
//-----------------------------------------------------------------
#(
     parameter OUT_SHIFT        = 8
)
//-----------------------------------------------------------------
// Ports
//-----------------------------------------------------------------
(
    // Inputs
     input           clk_i
    ,input           rst_i
    ,input           img_start_i
    ,input           img_end_i
    ,input           inport_valid_i
    ,input  [ 15:0]  inport_data0_i
    ,input  [ 15:0]  inport_data1_i
    ,input  [ 15:0]  inport_data2_i
    ,input  [ 15:0]  inport_data3_i
    ,input  [  2:0]  inport_idx_i

    // Outputs
    ,output          outport_valid_o
    ,output [ 31:0]  outport_data_o
    ,output [  5:0]  outport_idx_o
);

localparam [15:0] W1 = 2841; // cos( pi/16) * sqrt(2) * 2^11
localparam [15:0] W2 = 2676; // cos(2pi/16) * sqrt(2) * 2^11
localparam [15:0] W3 = 2408; // cos(3pi/16) * sqrt(2) * 2^11
localparam [15:0] W5 = 1609; // cos(5pi/16) * sqrt(2) * 2^11
localparam [15:0] W6 = 1108; // cos(6pi/16) * sqrt(2) * 2^11
localparam [15:0] W7 = 565;  // cos(7pi/16) * sqrt(2) * 2^11
localparam [15:0] W1_W7_SUM  = 3406; // (cos( pi/16) + cos(7pi/16)) * sqrt(2) * 2^11
localparam [15:0] W1_W7_DIFF = 2276; // (cos( pi/16) - cos(7pi/16)) * sqrt(2) * 2^11
localparam [15:0] W2_W6_SUM  = 3784; // (cos(2pi/16) + cos(6pi/16)) * sqrt(2) * 2^11
localparam [15:0] W2_W6_DIFF = 1567; // (cos(2pi/16) - cos(6pi/16)) * sqrt(2) * 2^11
localparam [15:0] W3_W5_SUM  = 4017; // (cos(3pi/16) + cos(5pi/16)) * sqrt(2) * 2^11
localparam [15:0] W3_W5_DIFF = 799;  // (cos(3pi/16) - cos(5pi/16)) * sqrt(2) * 2^11


wire signed [31:0] block_in_0_1 = {{16{inport_data0_i[15]}}, inport_data0_i};
wire signed [31:0] block_in_2_3 = {{16{inport_data1_i[15]}}, inport_data1_i};
wire signed [31:0] block_in_4_5 = {{16{inport_data2_i[15]}}, inport_data2_i};
wire signed [31:0] block_in_6_7 = {{16{inport_data3_i[15]}}, inport_data3_i};

//-----------------------------------------------------------------
// IDCT
//-----------------------------------------------------------------
reg signed [31:0] s0;
reg signed [31:0] s1;
reg signed [31:0] s2;
reg signed [31:0] s3;
reg signed [31:0] s4;
reg signed [31:0] s5;
reg signed [31:0] s6;
reg signed [31:0] s7;
reg signed [31:0] mul0_a;
reg signed [31:0] mul0_b;
reg signed [31:0] mul1_a;
reg signed [31:0] mul1_b;

always @ (posedge clk_i )
if (rst_i)
begin
    s0     <= 32'b0;
    s1     <= 32'b0;
    mul0_a <= 32'b0;
    mul0_b <= 32'b0;
    mul1_a <= 32'b0;
    mul1_b <= 32'b0;
end
else
begin
    /* verilator lint_off WIDTH */
    case (inport_idx_i)
    3'd0: // select bank 0
    begin
        s0     <= (block_in_0_1 << 11) + 128;
        s1     <= block_in_4_5 << 11;
        mul0_a <= block_in_2_3 + block_in_6_7;
        mul0_b <= W6;
        mul1_a <= block_in_2_3;
        mul1_b <= W2_W6_DIFF;
    end
    3'd1: // select bank 1
    begin
        mul0_a <= block_in_0_1 + block_in_6_7;
        mul0_b <= W7;
        mul1_a <= block_in_0_1;
        mul1_b <= W1_W7_DIFF;
    end
    3'd2: // select bank 1
    begin
        s0     <= s0 + s1;
        s1     <= s0 - s1;
        mul0_a <= block_in_2_3 + block_in_4_5;
        mul0_b <= W3;
        mul1_a <= block_in_6_7;
        mul1_b <= W1_W7_SUM;
    end
    3'd3: // select bank 1
    begin
        mul0_a <= block_in_2_3;
        mul0_b <= W3_W5_SUM;
        mul1_a <= block_in_4_5;
        mul1_b <= W3_W5_DIFF;
    end
    3'd4: // select bank 0
    begin
        mul0_a <= block_in_6_7;
        mul0_b <= W2_W6_SUM;
    end
    3'd6: // t5 and t6 should be ready
    begin
        mul0_a <= s4 - s5;
        mul0_b <= 181;
        mul1_a <= s7 - s6;
        mul1_b <= 181;
    end
    default:
        ;
    endcase
    /* verilator lint_on WIDTH */
end

reg signed [31:0] mul0;
reg signed [31:0] mul1;

always @ (posedge clk_i )
if (rst_i)
begin
    mul0 <= 32'b0;
    mul1 <= 32'b0;
end
else
begin
    mul0 <= mul0_a * mul0_b;
    mul1 <= mul1_a * mul1_b;
end

reg        out_stg0_valid_q;
reg [2:0]  out_stg0_idx_q;

always @ (posedge clk_i )
if (rst_i)
begin
    out_stg0_valid_q <= 1'b0;
    out_stg0_idx_q   <= 3'b0;
end
else
begin
    out_stg0_valid_q <= inport_valid_i;
    out_stg0_idx_q   <= inport_idx_i;
end

reg        out_stg1_valid_q;
reg [2:0]  out_stg1_idx_q;

always @ (posedge clk_i )
if (rst_i)
begin
    out_stg1_valid_q <= 1'b0;
    out_stg1_idx_q   <= 3'b0;
end
else
begin
    out_stg1_valid_q <= out_stg0_valid_q;
    out_stg1_idx_q   <= out_stg0_idx_q;
end

reg signed [31:0] o_t0;
reg signed [31:0] o_t1;
reg signed [31:0] o_t2;
reg signed [31:0] o_t3;
reg signed [31:0] o_t4;
reg signed [31:0] o_t5;
reg signed [31:0] o_t6;
reg signed [31:0] o_t7;

always @ (posedge clk_i )
if (rst_i)
begin
    s2     <= 32'b0;
    s3     <= 32'b0;
    s4     <= 32'b0;
    s5     <= 32'b0;
    s6     <= 32'b0;
    s7     <= 32'b0;
    o_t0   <= 32'b0;
    o_t1   <= 32'b0;
    o_t2   <= 32'b0;
    o_t3   <= 32'b0;
    o_t4   <= 32'b0;
    o_t5   <= 32'b0;
    o_t6   <= 32'b0;
    o_t7   <= 32'b0;
end
else
begin
    case (out_stg1_idx_q)
    3'd0:
    begin
        s3   <= mul0 + mul1;  // s3
        s2   <= mul0;         // s2/s3 common factor
    end
    3'd1:
    begin
        s7   <= mul0 + mul1; // s7
        s4   <= mul0;        // s4/s7 common factor
        o_t0 <= s0 + s3;     // t0
    end
    3'd2:
    begin
        s5   <= mul0;        // s5/s6 common factor
        s4   <= s4 - mul1;   // s4
        o_t3 <= s0 - s3;     // t3
    end
    3'd3:
    begin
        s5   <= s5 - mul0;   // s5
        s6   <= s5 - mul1;   // s6
    end
    3'd4:
    begin
        s2   <= s2 - mul0;   // s2
        o_t4 <= s4 + s5;     // t4
        o_t7 <= s6 + s7;     // t7
    end
    3'd5:
    begin
        o_t1 <= s1 + s2;     // t1
        o_t2 <= s1 - s2;     // t2
    end
    3'd6:
    begin
        o_t5 <= (mul1 - mul0) >>> 8; // t5
        o_t6 <= (mul1 + mul0) >>> 8; // t6
    end
    default: ;
    endcase
end

reg        out_stg2_valid_q;
reg [2:0]  out_stg2_idx_q;

always @ (posedge clk_i )
if (rst_i)
begin
    out_stg2_valid_q <= 1'b0;
    out_stg2_idx_q   <= 3'b0;
end
else
begin
    out_stg2_valid_q <= out_stg1_valid_q;
    out_stg2_idx_q   <= out_stg1_idx_q;
end

reg signed [31:0] block_out[0:7];
reg signed [31:0] block_out_tmp;

always @ (posedge clk_i )
if (rst_i)
begin
    block_out[0] <= 32'b0;
    block_out[1] <= 32'b0;
    block_out[2] <= 32'b0;
    block_out[3] <= 32'b0;
    block_out[4] <= 32'b0;
    block_out[5] <= 32'b0;
    block_out[6] <= 32'b0;
    block_out[7] <= 32'b0;
    block_out_tmp <= 32'b0;
end
else if (out_stg2_valid_q)
begin
    if (out_stg2_idx_q == 3'd4)
    begin
        block_out[0] <= ((o_t0 + o_t7) >>> OUT_SHIFT);
        block_out_tmp <= ((o_t0 - o_t7) >>> OUT_SHIFT); // block_out[7]
        block_out[3] <= ((o_t3 + o_t4) >>> OUT_SHIFT);
        block_out[4] <= ((o_t3 - o_t4) >>> OUT_SHIFT);
    end

    if (out_stg2_idx_q == 3'd6)
    begin
        block_out[2] <= ((o_t2 + o_t5) >>> OUT_SHIFT);
        block_out[5] <= ((o_t2 - o_t5) >>> OUT_SHIFT);
        block_out[1] <= ((o_t1 + o_t6) >>> OUT_SHIFT);
        block_out[6] <= ((o_t1 - o_t6) >>> OUT_SHIFT);
        block_out[7] <= block_out_tmp;
    end
end

reg [5:0] valid_q;

always @ (posedge clk_i )
if (rst_i)
    valid_q  <= 6'b0;
else if (img_start_i)
    valid_q  <= 6'b0;
else
    valid_q <= {valid_q[4:0], out_stg2_valid_q};

reg [5:0] ptr_q;

always @ (posedge clk_i )
if (rst_i)
    ptr_q <= 6'd0;
else if (img_start_i)
    ptr_q <= 6'd0;
else if (outport_valid_o)
    ptr_q <= ptr_q + 6'd1;

assign outport_valid_o = valid_q[5];
assign outport_data_o  = block_out[ptr_q[2:0]];

assign outport_idx_o   = ptr_q;

endmodule
