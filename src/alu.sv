`timescale 1ns/1ps

module alu (
    input  logic [7:0] a,       // input A
    input  logic [7:0] b,       // input B
    input  logic [1:0] opcode,  // 00 = ADD, 01 = SUB
    output logic [7:0] result   // ALU result
);

    always_comb begin
        case (opcode)
            2'b00: result = a + b;   // ADD operation
            2'b01: result = a - b;   // SUB operation
            default: result = 8'h00; // default = 0
        endcase
    end

endmodule
