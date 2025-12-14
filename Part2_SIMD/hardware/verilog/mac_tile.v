// Created by prof. Mingu Kang @VVIP Lab in UCSD ECE department
// Please do not spread this code without permission 
module mac_tile (clk, out_s, in_w, out_e, in_n, inst_w, inst_e, reset);

parameter bw = 4;
parameter psum_bw = 16;

output [psum_bw-1:0] out_s;
input  [bw-1:0] in_w; 
output [bw-1:0] out_e; 
input  [2:0] inst_w; // inst[2]: simd; inst[1]:execute, inst[0]: kernel loading
output [2:0] inst_e;
input  [psum_bw-1:0] in_n;
input  clk;
input  reset;

reg [bw-1:0] a_q;
reg [bw-1:0] b0_q, b1_q;
reg [psum_bw-1:0] c_q;
reg simd; // load while loading weight
wire [psum_bw-1:0] mac_out;

reg load_ready_q0, load_ready_q1;
reg [2:0] inst_q;

assign out_s = mac_out;
assign out_e = a_q;
assign inst_e = inst_q;

mac #(.bw(bw), .psum_bw(psum_bw)) mac_instance (
        .a(a_q), 
        .b0(b0_q),
        .b1(b1_q),
        .c(c_q),
        .simd(simd),
	.out(mac_out)
); 

always@ (posedge clk) begin
	if(reset) begin
		a_q <= 0;
		b0_q <= 0;
        b1_q <= 0;
		c_q <= 0;
		inst_q <= 0;
		load_ready_q0 <= 1'b1;
        load_ready_q1 <= 1'b1;
        simd <= 0;
	end
	else begin
		inst_q[1] <= inst_w[1];

		if(|inst_w[1:0]) begin
			a_q <= in_w;
			c_q <= in_n;
		end

		if(inst_w[0] && load_ready_q0 && !inst_w[2]) begin // not simd
			b0_q <= in_w;
            b1_q <= in_w;
            simd <= inst_w[2];
			load_ready_q0 <= 0;
            load_ready_q1 <= 0;
		end	

        if (inst_w[0] && load_ready_q0 && inst_w[2]) begin // simd load weight1
            b0_q <= in_w;
            simd <= inst_w[2];
            load_ready_q0 <= 0;
        end

        if (inst_w[0] && load_ready_q1 && !load_ready_q0 && simd) begin // simd load weight2 
            b1_q <= in_w;
            load_ready_q1 <= 0;
        end

		if (!load_ready_q0 && !load_ready_q1) begin
			inst_q[0] <= inst_w[0];
            inst_q[2] <= inst_w[2];
		end
	end
end

endmodule
