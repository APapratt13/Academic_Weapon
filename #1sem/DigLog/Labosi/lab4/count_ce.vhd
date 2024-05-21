library ieee;
use ieee.std_logic_1164.all;
use ieee.std_logic_unsigned.all;

entity count_ce is
    port (
	clk_25m: in std_logic;
	btn_down: in std_logic;
	btn_f1: in std_logic;
	sw: in std_logic_vector(3 downto 0);
	led: out std_logic_vector(7 downto 0)
    );
end count_ce;

architecture x of count_ce is
    signal R, delta: std_logic_vector(31 downto 0);

begin

    process(clk_25m)
    begin
	if rising_edge(clk_25m) and btn_f1 = '1' then
	    R <= R + delta;
	end if;
    end process;

    delta <= x"0000000" & sw;
    
    led <= R(31 downto 24) when btn_down = '0' else R(23 downto 16);
end x;

