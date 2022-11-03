module light #(
    parameter input_WIDTH = 16,
              output_WIDTH = 8
)(
    input logic             rst1,
    input logic             rst2,
    input logic             clk,
    input logic [input_WIDTH-1:0] offset,
    output logic [output_WIDTH-1:0] data_out
);

logic tick;

clktick clktick1(
    .clk(clk),
    .rst(rst1),
    .en(1),
    .N(offset),
    .tick(tick)
);

f1_fsm f1_fsm(
    .rst(rst2),
    .en(tick),
    .clk(clk),
    .data_out(data_out)
);

endmodule
