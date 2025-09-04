#include "Vtb_alu.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);

    Vtb_alu* top = new Vtb_alu;
    VerilatedVcdC* tfp = new VerilatedVcdC;

    Verilated::traceEverOn(true);
    top->trace(tfp, 99);
    tfp->open("dump.vcd");

    for (int i = 0; i < 50; i++) {
        top->eval();
        tfp->dump(i);
    }

    tfp->close();
    delete top;
    printf("Simulation completed successfully!\n");
    return 0;
}
