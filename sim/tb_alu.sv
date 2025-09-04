`timescale 1ns/1ps

module tb_alu;

    logic [7:0] a, b;
    logic [1:0] opcode;
    logic [7:0] result;

    // Instantiate DUT
    alu dut (
        .a(a),
        .b(b),
        .opcode(opcode),
        .result(result)
    );

    initial begin
        // Test ADD operation
        a = 8'd10; b = 8'd5; opcode = 2'b00;
        #10;
        $display("[ADD] %0d + %0d = %0d", a, b, result);
        assert(result == 15) else $error("ADD test failed!");

        // Test SUB operation
        a = 8'd20; b = 8'd7; opcode = 2'b01;
        #10;
        $display("[SUB] %0d - %0d = %0d", a, b, result);
        assert(result == 13) else $error("SUB test failed!");

        $display("All tests passed!");
        $finish;
    end

endmodule
