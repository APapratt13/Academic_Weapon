library ieee;
use ieee.std_logic_1164.all;

entity brojke is
    port (
        ap_f1, ap_left, ap_down, ap_up, ap_right: in std_logic; -- ulazi
	ap_code: out std_logic_vector(7 downto 0) -- izlaz
    );
end brojke;
-- modul brojke

architecture behavioral of brojke is
    signal ap_btns: std_logic_vector(4 downto 0);

begin

    ap_btns <= ap_f1 & ap_left & ap_down & ap_up & ap_right; -- ULX3S

    with ap_btns select
    ap_code <=
        "00000000" when "00000", -- ASCII NULL
	"00000000" when "10000", -- ASCII NULL = za f1
        "00110011" when "01000", -- 3 = za left
	"00110110" when "00100", -- 6 = za down
	"00110101" when "00010", -- 5 = za up
	"00110101" when "00001", -- 5 = za right
	"00111000" when "11000", -- 8 = za f1+left
	"00110100" when "10100", -- 4 = za f1+down
	"00111001" when "10010", -- 9 = za f1+up
	"00110001" when "10001", -- 1 = za f1+right
	"--------" when others ; -- don't care
end;
