module icg (
    input clk,
    input en,
    output gclk
);

    reg     en_q;

    assign gclk = en_q & clk;
    
    always @(*) begin
      if(!clk) en_q = en;
    end
    
endmodule