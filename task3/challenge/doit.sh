# !/bin/sh

# cleanup
rm -rf obj_dir
rm -f light.vcd

# run Verilator to translate Verilog into C++, including C++ testbench
verilator -Wall --cc --trace light.sv --exe light_tb.cpp

#build C++ project via make automatically generated by Verilator
make -j -C obj_dir/ -f Vlight.mk Vlight

# run executable simulation file
obj_dir/Vlight