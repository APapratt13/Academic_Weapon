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
    signal N: std_logic_vector(7 downto 0);

begin

	N <= "01011011"; -- 91

    R <= "00000000" when R = N - 1 or btn_f1 = '1' -- on ga resetira kada je na klik vrijednost 01011010 zato je zadnji vidljivi izlaz 01011001
			else R + 1 when rising_edge(clk_key) ; 
    
    I_debouncer: entity work.debouncer port map (
    clk => clk_25m, 
    key => btn_up, 
    debounced => clk_key
    );
	
	led <= R;
end x;
