module mac_tile (clk, out_s, in_w, out_e, in_n, inst_w, inst_e, reset);

parameter bw = 4;
parameter psum_bw = 16;

output [psum_bw-1:0] out_s;
input  [bw-1:0] in_w;
output [bw-1:0] out_e;
input  [2:0] inst_w; // inst_w[2] OS inst_w[1]:execute, inst_w[0]: kernel loading/flush in OS
output [2:0] inst_e;
input  [psum_bw-1:0] in_n;
input  clk;
input  reset;

reg [bw-1:0] a_q;
reg [bw-1:0] b_q;
reg [psum_bw-1:0] c_q;
wire [psum_bw-1:0] mac_out;

wire os, execute;

reg load_ready_q;
reg [2:0] inst_q;

assign os = inst_w[2];
assign execute = inst_w[1];

assign out_s = !os? mac_out : // just mac_out in ws
        // inst_w[0] ? c_q :
        execute ? {{psum_bw-bw{1'b0}}, b_q} :
        c_q;
        // {psum_bw{1'b0}};

assign out_e = a_q;
assign inst_e = inst_q;

mac #(.bw(bw), .psum_bw(psum_bw)) mac_instance (
        .a(a_q),
        .b(b_q),
        .c(c_q),
	.out(mac_out)
);

//aq
// TODO combine??
always @ (posedge clk) begin
    if (reset)
        a_q <= 0;
    else begin
        if (!os) begin // WS
            if(|inst_w[1:0]) begin
			    a_q <= in_w;
            end
        end
        else begin // OS
            if(inst_w[1:0]) begin
			    a_q <= in_w;
            end
        end
    end
end

// b_q, inst_q, load_ready_q
always @(posedge clk ) begin
    if (reset) begin
        b_q <= 0;
        load_ready_q <= 1'b1;
        inst_q <=0;
    end
    else begin
        if (!os) begin // WS
            inst_q[2:1] <= inst_w[2:1];

		    if(inst_w[0] && load_ready_q) begin
			    b_q <= in_w;
			    load_ready_q <= 1'b0;
		    end
		    else if (!load_ready_q) begin
			    inst_q[0] <= inst_w[0];
		    end
        end
        else begin // OS
            // load_ready_q <= 0;
            inst_q <= inst_w;
            if (execute)
                b_q <= in_n[bw-1:0];
        end
    end
end

// cq
always@ (posedge clk) begin
	if(reset) begin
		c_q <= 0;
	end
	else begin
        if (!os) begin
		    if(|inst_w[1:0]) begin
			    c_q <= in_n;
		    end
        end
        else begin
            // if (execute)
            //     c_q <= mac_out;
            // else if (inst_w[0]) // flush
            //     c_q <= in_n;
            // else
            //     c_q <= 0;
            if (inst_w[0]) // flush
                c_q <= in_n;
            else if (inst_q[1])
                c_q <= mac_out;
        end
	end
end

endmodule
