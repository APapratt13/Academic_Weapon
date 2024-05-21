/* Verilog model created from schematic lab2.sch -- Nov 10, 2023 15:23 */

module lab2( btn_down, btn_f1, btn_left, btn_right, btn_up, clk_25m, led, rs232_tx );
 input btn_down;
 input btn_f1;
 input btn_left;
 input btn_right;
 input btn_up;
 input clk_25m;
output [7:0] led;
output rs232_tx;
wire N_49;
wire N_50;
wire N_51;
wire N_52;
wire N_53;
wire N_54;
wire N_55;
wire N_56;
wire N_47;
wire N_48;
wire N_43;
wire N_1;



OR3 I49 ( .A(N_53), .B(btn_right), .C(btn_up), .Z(N_52) );
OR3 I43 ( .A(btn_f1), .B(btn_up), .C(btn_right), .Z(N_47) );
INV I48 ( .A(btn_down), .Z(N_54) );
AND2 I50 ( .A(btn_down), .B(btn_f1), .Z(N_50) );
AND2 I51 ( .A(btn_left), .B(N_54), .Z(N_51) );
AND2 I47 ( .A(btn_f1), .B(N_54), .Z(N_53) );
AND2 I44 ( .A(btn_down), .B(btn_left), .Z(N_55) );
OR2 I52 ( .A(N_53), .B(btn_up), .Z(N_43) );
OR2 I45 ( .A(N_55), .B(btn_up), .Z(N_56) );
OR4 I53 ( .A(btn_up), .B(btn_right), .C(N_51), .D(N_50), .Z(N_49) );
OR4 I46 ( .A(btn_left), .B(btn_f1), .C(btn_up), .D(btn_right), .Z(N_48) );
OB I19 ( .I(N_53), .O(led[3]) );
OB I18 ( .I(N_43), .O(led[1]) );
OB I20 ( .I(N_52), .O(led[2]) );
OB I21 ( .I(N_49), .O(led[0]) );
OB I22 ( .I(N_56), .O(led[4]) );
OB I23 ( .I(N_48), .O(led[6]) );
OB I24 ( .I(N_47), .O(led[5]) );
OB I25 ( .I(N_1), .O(led[7]) );
serial_tx I1 ( .byte_in({ N_1,N_48,N_47,N_56,N_53,N_52,N_43,N_49 }),
            .clk(clk_25m), .ser_out(rs232_tx) );

endmodule // lab2
