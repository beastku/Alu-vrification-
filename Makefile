TOP = tb_alu
SRC = src/alu.sv sim/tb_alu.sv sim/main.cpp
EXEC = sim_alu

all: build run wave

build:
	verilator -Wall --cc --exe --build $(SRC) -o $(EXEC) --trace --timing --top-module $(TOP)

run:
	./obj_dir/$(EXEC)  # ← FIXED THIS LINE

wave:
	gtkwave dump.vcd &

clean:
	rm -rf obj_dir $(EXEC) dump.vcd

.PHONY: all build run wave clean