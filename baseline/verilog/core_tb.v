// Created by prof. Mingu Kang @VVIP Lab in UCSD ECE department
// Please do not spread this code without permission 
`timescale 1ns/1ps

module core_tb;

parameter bw = 4;
parameter psum_bw = 16;
parameter len_kij = 9;
parameter len_onij = 16;
parameter col = 8;
parameter row = 8;
parameter len_nij = 36;
parameter inst_bw = 38;
parameter ADDR_W = 11;

reg clk = 0;
reg reset = 1;

wire [inst_bw-1:0] inst_q; 

reg [1:0]  inst_w_q = 0; 
reg [bw*row-1:0] D_xmem_q = 0;
reg CEN_xmem = 1;
reg WEN_xmem = 1;
reg [10:0] A_xmem = 0;
reg CEN_xmem_q = 1;
reg WEN_xmem_q = 1;
reg [10:0] A_xmem_q = 0;
reg CEN_pmem = 1;
reg WEN_pmem = 1;
reg [10:0] A_pmem = -1;
reg CEN_pmem_q = 1;
reg WEN_pmem_q = 1;
reg [10:0] A_pmem_q = 0;
reg ofifo_rd_q = 0;
reg ififo_wr_q = 0;
reg ififo_rd_q = 0;
reg l0_rd_q = 0;
reg l0_wr_q = 0;
reg execute_q = 0;
reg load_q = 0;
reg acc_q = 0;
reg acc = 0;
reg op_mode = 0;
reg op_mode_q = 0;
reg ld_mode = 0;
reg ld_mode_q = 0;
reg first_rd = 1;
reg sfu_acc = 0;
reg sfu_acc_q = 0;
reg sfu_relu = 0;
reg sfu_relu_q = 0;
reg sfu_relu_2q = 0;

reg [1:0]  inst_w; 
reg [bw*row-1:0] D_xmem;
reg [psum_bw*col-1:0] answer;


reg ofifo_rd;
reg ififo_wr;
reg ififo_rd;
reg l0_rd;
reg l0_wr;
reg execute;
reg load;
reg [8*30:1] stringvar;
reg [8*64:1] w_file_name;
wire ofifo_valid;
reg ofifo_valid1;
reg ofifo_valid2;
wire [col*psum_bw-1:0] sfu_out;

integer x_file, x_scan_file ; // file_handler
integer w_file, w_scan_file ; // file_handler
integer acc_file, acc_scan_file ; // file_handler
integer out_file, out_scan_file ; // file_handler
integer captured_data; 
integer t, i, j, k, kij, m;
integer error, temp, o_nij;
integer out_num;

assign inst_q[37] = sfu_relu_q;
assign inst_q[36] = sfu_acc_q;
assign inst_q[35] = ld_mode_q;
assign inst_q[34] = op_mode_q;
assign inst_q[33] = acc_q;
assign inst_q[32] = CEN_pmem_q;
assign inst_q[31] = WEN_pmem_q;
assign inst_q[30:20] = A_pmem_q;
assign inst_q[19]   = CEN_xmem_q;
assign inst_q[18]   = WEN_xmem_q;
assign inst_q[17:7] = A_xmem_q;
assign inst_q[6]   = ofifo_rd_q;
assign inst_q[5]   = ififo_wr_q;
assign inst_q[4]   = ififo_rd_q;
assign inst_q[3]   = l0_rd_q;
assign inst_q[2]   = l0_wr_q;
assign inst_q[1]   = execute_q; 
assign inst_q[0]   = load_q; 


core  #(.bw(bw), .col(col), .row(row), .inst_bw(inst_bw), 
          .psum_bw(psum_bw), .ADDR_W(ADDR_W)) core_instance (
	.clk(clk), 
  .reset(reset),
	.inst(inst_q),
	.ofifo_valid(ofifo_valid),
  .D_xmem(D_xmem_q), 
  .sfu_out(sfu_out)
	); 

initial begin 

  inst_w   = 0; 
  D_xmem   = 0;
  CEN_xmem = 1;
  WEN_xmem = 1;
  A_xmem   = 0;
  ofifo_rd = 0;
  ififo_wr = 0;
  ififo_rd = 0;
  l0_rd    = 0;
  l0_wr    = 0;
  execute  = 0;
  load     = 0;

  $dumpfile("core_tb.vcd");
  $dumpvars(0,core_tb);

  x_file = $fopen("./verilog/VGG16_quant_4bit_base_0_activation.txt", "r");
  // Following three lines are to remove the first three comment lines of the file
  x_scan_file = $fscanf(x_file,"%s", captured_data);
  x_scan_file = $fscanf(x_file,"%s", captured_data);
  x_scan_file = $fscanf(x_file,"%s", captured_data);

  //////// Reset /////////
  #0.5 clk = 1'b0;   reset = 1;
  #0.5 clk = 1'b1; 

  for (i=0; i<10 ; i=i+1) begin
    #0.5 clk = 1'b0;
    #0.5 clk = 1'b1;  
  end

  #0.5 clk = 1'b0;   reset = 0;
  #0.5 clk = 1'b1; 

  #0.5 clk = 1'b0;   
  #0.5 clk = 1'b1;   
  /////////////////////////

  /////// Activation data writing to memory ///////
  for (t=0; t<len_nij; t=t+1) begin  
    #0.5 clk = 1'b0;  x_scan_file = $fscanf(x_file,"%32b", D_xmem); WEN_xmem = 0; CEN_xmem = 0; if (t>0) A_xmem = A_xmem + 1;
    #0.5 clk = 1'b1;   
  end

  #0.5 clk = 1'b0;  WEN_xmem = 1;  CEN_xmem = 1; A_xmem = 0;
  #0.5 clk = 1'b1; 

  $fclose(x_file);
  /////////////////////////////////////////////////

  for (kij=0; kij<9; kij=kij+1) begin  // kij loop

    case(kij)
     0: w_file_name = "./verilog/VGG16_quant_4bit_base_0_weight.txt";
     1: w_file_name = "./verilog/VGG16_quant_4bit_base_1_weight.txt";
     2: w_file_name = "./verilog/VGG16_quant_4bit_base_2_weight.txt";
     3: w_file_name = "./verilog/VGG16_quant_4bit_base_3_weight.txt";
     4: w_file_name = "./verilog/VGG16_quant_4bit_base_4_weight.txt";
     5: w_file_name = "./verilog/VGG16_quant_4bit_base_5_weight.txt";
     6: w_file_name = "./verilog/VGG16_quant_4bit_base_6_weight.txt";
     7: w_file_name = "./verilog/VGG16_quant_4bit_base_7_weight.txt";
     8: w_file_name = "./verilog/VGG16_quant_4bit_base_8_weight.txt";
    endcase
    
    w_file = $fopen(w_file_name, "r");
    // Following three lines are to remove the first three comment lines of the file
    w_scan_file = $fscanf(w_file,"%s", captured_data);
    w_scan_file = $fscanf(w_file,"%s", captured_data);
    w_scan_file = $fscanf(w_file,"%s", captured_data);

    #0.5 clk = 1'b0;   reset = 1;
    #0.5 clk = 1'b1; 

    for (i=0; i<10 ; i=i+1) begin
      #0.5 clk = 1'b0;
      #0.5 clk = 1'b1;  
    end

    #0.5 clk = 1'b0;   reset = 0;
    #0.5 clk = 1'b1; 

    #0.5 clk = 1'b0;   
    #0.5 clk = 1'b1;   





    /////// Kernel data writing to memory ///////

    A_xmem = 11'b10000000000;

    for (t=0; t<col; t=t+1) begin  
      #0.5 clk = 1'b0;  w_scan_file = $fscanf(w_file,"%32b", D_xmem); WEN_xmem = 0; CEN_xmem = 0; if (t>0) A_xmem = A_xmem + 1; 
      #0.5 clk = 1'b1;  
    end

    #0.5 clk = 1'b0;  WEN_xmem = 1;  CEN_xmem = 1; A_xmem = 0;
    #0.5 clk = 1'b1;  
    /////////////////////////////////////

    A_xmem = 11'b10000000000;

    /////// Kernel data writing to L0 ///////
    WEN_xmem = 1; CEN_xmem = 0; 
    for (t=0; t<col; t=t+1) begin  
      #0.5 clk = 1'b0;   l0_rd = 0; l0_wr = 1; WEN_xmem = 1; CEN_xmem = 0; A_xmem = A_xmem + 1; 
      #0.5 clk = 1'b1;  
    end

    #0.5 clk = 1'b0;   l0_rd = 0; l0_wr = 0; WEN_xmem = 1;  CEN_xmem = 1;
    #0.5 clk = 1'b1;   

    /////////////////////////////////////



    /////// Kernel loading to PEs ///////
    for (t=0; t<col; t=t+1) begin  
      #0.5 clk = 1'b0;   l0_rd = 1; l0_wr = 0; load = 1; execute = 0; ld_mode = 1;
      #0.5 clk = 1'b1;   
    end
    /////////////////////////////////////

    ////// provide some intermission to clear up the kernel loading ///
    #0.5 clk = 1'b0;  load = 0; l0_rd = 0; 
    #0.5 clk = 1'b1;  
    
    #0.5 clk = 1'b0;  ld_mode = 0;
    #0.5 clk = 1'b1;  

    for (i=0; i<10 ; i=i+1) begin
      #0.5 clk = 1'b0;
      #0.5 clk = 1'b1;  
    end
    /////////////////////////////////////



    /////// Activation data writing to L0 ///////
    //...
    /////////////////////////////////////



    /////// Execution ///////
    //...
    /////////////////////////////////////

    /////// Parallel Activation data writing to L0 and Execution ///////
    first_rd = 1;
    A_xmem = 11'b00000000000;
    WEN_xmem = 1; CEN_xmem = 1; 
    for (t=0; t<len_nij+30; t=t+1) begin  
      #0.5 clk = 1'b0;  
      // Writing to l0
      if(A_xmem < len_nij)begin
        WEN_xmem = 1; CEN_xmem = 0;  
        if(t>0) begin
          A_xmem = A_xmem + 1;
          l0_wr = 1;
        end 
      end
      else begin
        WEN_xmem = 1; CEN_xmem = 1; l0_wr = 0;
      end      

      // Reading from l0 control signal to be sent for nij length
      if(t>1 && t<len_nij+2)begin
        l0_rd = 1; load = 0; execute = 1; 
      end
      else begin
        l0_rd = 0; load = 0; execute = 0; 
      end
 
      if (ofifo_valid) begin
        ofifo_rd = 1; 
      end
      else begin
        ofifo_rd = 0;  
      end

      if (ofifo_valid & ofifo_valid1) begin
      	WEN_pmem = 0; CEN_pmem = 0; A_pmem = A_pmem + 1;
      end
      else begin
	WEN_pmem = 1; CEN_pmem = 1;
      end

      if (!ofifo_valid) begin
	WEN_pmem = 1; CEN_pmem = 1;
      end
    
      #0.5 clk = 1'b1;  
    end

    /////////////////////////////////////


    //////// OFIFO READ ////////
    // Ideally, OFIFO should be read while execution, but we have enough ofifo
    // depth so we can fetch out after execution.
    //...
    /////////////////////////////////////

  #0.5 clk = 1'b0;  l0_wr = 0; l0_rd = 0; load = 0; execute=0;
  #0.5 clk = 1'b1;  

  ////////// SFU accumulate and RELU in parallel //////////
  
  end  // end of kij loop
  
  ////////// Start verification with RELU in parallel //////////

  out_file = $fopen("./verilog/VGG16_quant_4bit_base_0_output_relu.txt", "r");  

  // Following three lines are to remove the first three comment lines of the file
  out_scan_file = $fscanf(out_file,"%s", answer); 
  out_scan_file = $fscanf(out_file,"%s", answer); 
  out_scan_file = $fscanf(out_file,"%s", answer); 

  error = 0;
  out_num = 0;
  o_nij = (((len_nij**0.5) - (len_kij**0.5))+1);

  A_pmem = 0;
  sfu_acc = 0;
  sfu_relu = 0;
  temp = 0;
  
  for (m = 0; m < o_nij; m=m+1) begin
     A_pmem = 0;
     for (i = 0; i < o_nij; i=i+1) begin
        temp = i + m*(len_nij**0.5); 
        for (j = 0; j < (len_kij**0.5); j=j+1) begin
	   for (k = 0; k < (len_kij**0.5); k=k+1) begin
	      WEN_pmem = 1; CEN_pmem = 0; A_pmem = (k*(len_nij+1)+k*1) + temp;
              #0.5 clk = 1'b0;
              #0.5 clk = 1'b1;
	      sfu_acc = 1;
	      
	      if (sfu_relu_2q == 1'b1) begin
	        out_scan_file = $fscanf(out_file, "%128b", answer);
	        // Compare output from the module with the expected answer
                if (sfu_out == answer) begin
	          $display("sfpout: %128b", sfu_out);
                  $display("answer: %128b", answer);
                  $display("%2d-th output featuremap Data matched! :D", out_num);
                end else begin
                  // Report error if the output does not match
                  $display("%2d-th output featuremap Data ERROR!!", out_num); 
                  $display("sfpout: %128b", sfu_out);
                  $display("answer: %128b", answer);
                  error = 1;
                end
		out_num = out_num + 1;
	      end
	        sfu_relu = 0;
           end
	   temp = A_pmem + ((len_nij**0.5)) - ((len_kij**0.5)-1) + (len_nij+1);
        end
        sfu_acc = 0;
        sfu_relu = 1;
     end
  end
  #0.5 clk = 1'b0;
  #0.5 clk = 1'b1;
  sfu_acc = 0; sfu_relu = 0; WEN_pmem = 1; CEN_pmem = 1;
  #0.5 clk = 1'b0;
  #0.5 clk = 1'b1;
  if (sfu_relu_2q == 1'b1) begin
      out_scan_file = $fscanf(out_file, "%128b", answer);
      // Compare output from the module with the expected answer
      if (sfu_out == answer) begin
          $display("sfpout: %128b", sfu_out);
          $display("answer: %128b", answer);
          $display("%2d-th output featuremap Data matched! :D", out_num);
      end else begin
          // Report error if the output does not match
          $display("%2d-th output featuremap Data ERROR!!", out_num); 
          $display("sfpout: %128b", sfu_out);
          $display("answer: %128b", answer);
          error = 1;
      end
      out_num = out_num + 1;
  end

  if (error == 0) begin
    $display("############ No error detected ##############"); 
    $display("########### Project Completed !! ############");
  end

  ////////// Accumulation /////////
  //out_file = $fopen("./verilog/VGG16_quant_4bit_base_0_output_norelu.txt", "r");  

  // Following three lines are to remove the first three comment lines of the file
  //out_scan_file = $fscanf(out_file,"%s", answer); 
  //out_scan_file = $fscanf(out_file,"%s", answer); 
  //out_scan_file = $fscanf(out_file,"%s", answer); 

  //error = 0;



  //$display("############ Verification Start during accumulation #############"); 

  //for (i=0; i<len_onij+1; i=i+1) begin 

    //#0.5 clk = 1'b0; 
    //#0.5 clk = 1'b1; 

    //if (i>0) begin
     //out_scan_file = $fscanf(out_file,"%128b", answer); // reading from out file to answer
    //   if (Q_out == answer)
    //     $display("%2d-th output featuremap Data matched! :D", i); 
    //   else begin
    //     $display("%2d-th output featuremap Data ERROR!!", i); 
    //     $display("sfpout: %128b", Q_out);
    //     $display("answer: %128b", answer);
    //    error = 1;
    //   end
    //end
   
 
    //#0.5 clk = 1'b0; reset = 1;
    //#0.5 clk = 1'b1;  
    //#0.5 clk = 1'b0; reset = 0; 
    //#0.5 clk = 1'b1;  

    // for (j=0; j<len_kij+1; j=j+1) begin 
    // 
    //   #0.5 clk = 1'b0;   
    //     if (j<len_kij) begin CEN_pmem = 0; WEN_pmem = 1; acc_scan_file = $fscanf(acc_file,"%11b", A_pmem); end
    //                    else  begin CEN_pmem = 1; WEN_pmem = 1; end
    // 
    //     if (j>0)  acc = 1;  
    //   #0.5 clk = 1'b1;   
    // end

    #0.5 clk = 1'b0; acc = 0;
    #0.5 clk = 1'b1; 
  //end


  //if (error == 0) begin
  //	$display("############ No error detected ##############"); 
  //	$display("########### Project Completed !! ############"); 

  //end

  // $fclose(acc_file);
  //////////////////////////////////

  for (t=0; t<10; t=t+1) begin  
    #0.5 clk = 1'b0;  
    #0.5 clk = 1'b1;  
  end

  #10 $finish;

end

always @ (posedge clk) begin
   sfu_relu_q <= sfu_relu;
   sfu_relu_2q <= sfu_relu_q;
   sfu_acc_q  <= sfu_acc;
   ld_mode_q  <= ld_mode;
   op_mode_q  <= op_mode;
   inst_w_q   <= inst_w; 
   D_xmem_q   <= D_xmem;
   CEN_xmem_q <= CEN_xmem;
   WEN_xmem_q <= WEN_xmem;
   A_pmem_q   <= A_pmem;
   CEN_pmem_q <= CEN_pmem;
   WEN_pmem_q <= WEN_pmem;
   A_xmem_q   <= A_xmem;
   ofifo_rd_q <= ofifo_rd;
   acc_q      <= acc;
   ififo_wr_q <= ififo_wr;
   ififo_rd_q <= ififo_rd;
   l0_rd_q    <= l0_rd;
   l0_wr_q    <= l0_wr ;
   execute_q  <= execute;
   load_q     <= load;
end

always @ (posedge clk) begin
   ofifo_valid1 <= ofifo_valid;
   ofifo_valid2 <= ofifo_valid1;
end

endmodule




