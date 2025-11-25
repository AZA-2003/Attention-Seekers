// Created by prof. Mingu Kang @VVIP Lab in UCSD ECE department
// Please do not spread this code without permission 
module mac (out, a, b0, b1, c, simd);

parameter bw = 4;
parameter psum_bw = 18; // This needs to be 18 for 2b lane reconfig 

localparam aw = bw/2;
localparam simd_bw = psum_bw/2;

output signed [psum_bw-1:0] out;
input signed  [bw-1:0] a;  // activation
input signed  [bw-1:0] b0;  // weight
input signed  [bw-1:0] b1;  // weight
input signed  [psum_bw-1:0] c;
input simd; //simd = 1 is 2 bit lane

// keeping product width simd_bw for now. Can also do 2*bw
wire signed [aw+bw-1:0] product0, product1;
wire signed [aw:0]   a_pad0, a_pad1;
wire signed [psum_bw-1:0] psum, simd_psum;
wire signed [psum_bw-1:0] product; // 
wire signed [2*bw-1:0] shifted_product1; // shifted_product1 left shifts upper product
wire signed [simd_bw-1:0] psum0, psum1;
wire signed [simd_bw-1:0] c0, c1;

assign a_pad0 = {1'b0, a[aw-1:0]}; //force unsigned lower activation
assign a_pad1 = {1'b0, a[2*aw-1:aw]}; //force unsigned upper activation 


assign product0 = a_pad0 * b0;
assign product1 = a_pad1 * b1;

// Simd output calculations
// Upper and lower c, only needed for simd
assign c0 = c[simd_bw-1:0];
assign c1 = c[2*simd_bw-1:simd_bw];

assign psum0 = product0 + c0;
assign psum1 = product1 + c1;
assign simd_psum = {psum1, psum0};

//Regular output calculations from shifted partial products 
assign shifted_product1 = {product1, {aw{1'b0}}};
assign product = shifted_product1 + product0; // product0 should be inferred as signed
assign psum = product + c;

// Assign output based on simd selector
assign out = simd? simd_psum : psum;

endmodule