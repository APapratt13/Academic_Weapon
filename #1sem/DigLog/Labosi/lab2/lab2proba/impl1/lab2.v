/* Verilog model created from schematic lab2.sch -- Nov 10, 2023 12:42 */

module lab2( btn_down, btn_f1, btn_left, btn_right, btn_up, clk_25m, led, rs232_tx );
 input btn_down;
 input btn_f1;
 input btn_left;
 input btn_right;
 input btn_up;
 input clk_25m;
output [7:0] led;
output rs232_tx;
wire N_44;
wire N_45;
wire N_46;
wire N_47;
wire N_48;
wire N_49;
wire N_42;
wire N_43;
wire N_40;
wire N_41;
wire N_35;
wire N_32;
wire N_24;
wire N_12;
wire N_11;
wire N_8;
wire N_1;



OR3 I37 ( .A(N_49), .B(btn_up), .C(N_24), .Z(N_42) );
INV I28 ( .A(btn_down), .Z(N_44) );
AND2 I39 ( .A(btn_up), .B(btn_down), .Z(N_46) );
AND2 I41 ( .A(btn_left), .B(N_44), .Z(N_48) );
AND2 I42 ( .A(btn_down), .B(N_40), .Z(N_8) );
AND2 I36 ( .A(btn_f1), .B(btn_down), .Z(N_24) );
AND2 I34 ( .A(N_44), .B(N_47), .Z(N_49) );
AND2 I29 ( .A(btn_down), .B(btn_left), .Z(N_35) );
AND2 I30 ( .A(N_44), .B(btn_up), .Z(N_32) );
OR2 I35 ( .A(btn_left), .B(btn_right), .Z(N_47) );
OR2 I43 ( .A(N_48), .B(btn_right), .Z(N_43) );
OR2 I32 ( .A(btn_right), .B(btn_up), .Z(N_40) );
OR2 I33 ( .A(N_32), .B(btn_f1), .Z(N_41) );
OR4 I40 ( .A(btn_right), .B(N_46), .C(btn_f1), .D(btn_left), .Z(N_45) );
OR4 I26 ( .A(btn_left), .B(btn_f1), .C(btn_up), .D(btn_right), .Z(N_11) );
OR4 I31 ( .A(N_32), .B(N_35), .C(btn_right), .D(btn_f1), .Z(N_12) );
OB I19 ( .I(N_41), .O(led[3]) );
OB I18 ( .I(N_43), .O(led[1]) );
OB I20 ( .I(N_42), .O(led[2]) );
OB I21 ( .I(N_45), .O(led[0]) );
OB I22 ( .I(N_8), .O(led[4]) );
OB I23 ( .I(N_11), .O(led[6]) );
OB I24 ( .I(N_12), .O(led[5]) );
OB I25 ( .I(N_1), .O(led[7]) );
serial_tx I1 ( .byte_in({ N_1,N_11,N_12,N_8,N_41,N_42,N_43,N_45 }),
            .clk(clk_25m), .ser_out(rs232_tx) );

endmodule // lab2
