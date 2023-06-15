module ParityShift (
    input clk,
    input nReset,

    input in,

    output logic [7:0] shiftReg,
    output parity
);

  logic out;

  NyuSync sync (.*);

  always_comb begin
    parity = ^shiftReg;
  end

  always_ff @(posedge clk, negedge nReset) begin
    if (!nReset) begin
      shiftReg <= 0;
    end else begin
      shiftReg <= {shiftReg[6:0], out};
    end
  end

endmodule
