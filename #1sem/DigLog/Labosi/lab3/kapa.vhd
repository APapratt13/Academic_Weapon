library ieee;
use ieee.std_logic_1164.all;

entity kapa is
    port (
        xm_f1, xm_left, xm_down, xm_up, xm_right: in std_logic; -- ulazi
	xm_code: out std_logic_vector(7 downto 0) -- izlaz
    );
end kapa;
-- modul kapa

architecture behavioral of kapa is
    signal xm_btns: std_logic_vector(4 downto 0);

begin

    xm_btns <= xm_f1 & xm_left & xm_down & xm_up & xm_right; -- ULX3S

    with xm_btns select
    xm_code <=
        "00000000" when "00000", -- ASCII NULL
	"00000000" when "10000", -- ASCII NULL = za f1
        "00101111" when "01000", -- / = za left
	"01011111" when "00100", -- _ = za down
	"01111100" when "00010", -- | = za up
	"01011100" when "00001", -- \ = za right
	"00101000" when "11000", -- ( = za f1+left
	"00001010" when "10100", -- 0A = za f1+down
	"00100000" when "10010", -- space = za f1+up
	"00101001" when "10001", -- ) = za f1+right
	"--------" when others ; -- don't care
end;
