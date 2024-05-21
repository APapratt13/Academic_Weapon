library ieee;
use ieee.std_logic_1164.all;
use ieee.std_logic_unsigned.all;

entity count is
    port (
	clk_25m: in std_logic;
	btn_f1: in std_logic;
	btn_up: in std_logic;
	led: out std_logic_vector(7 downto 0)
    );
end count;

architecture x of count is
    signal R: std_logic_vector(7 downto 0);
    signal clk_key: std_logic;

begin

    R <= "00000000" when btn_f1 = '1' -- ovo je asinkrono; asinkroni reset
			else R + 1 when rising_edge(clk_key); -- ali ovo je sinkrono
    
    I_debouncer: entity work.debouncer port map (
    clk => clk_25m, 
    key => btn_up, 
    debounced => clk_key
    );
	
	led <= R;
end x;
