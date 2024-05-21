library ieee;
use ieee.std_logic_1164.all;
use ieee.std_logic_unsigned.all;

entity count is
    port (
	clk_25m: in std_logic;
	btn_down: in std_logic;
	led: out std_logic_vector(7 downto 0);
	btn_up: in std_logic
    );
end count;

architecture x of count is
    signal R: std_logic_vector(7 downto 0); -- ide u led koji ima 7-0 pa ne moze 32
    signal clk_key: std_logic;

begin
    R <= R + 1 when rising_edge(clk_key); -- u ovom nam ne treba sw i delta jer se poveæava za jedan i ide direktno na led
    
    I_debouncer: entity work.debouncer port map ( --po uzoru na LV3
    clk => clk_25m, 
    key => btn_up, 
    debounced => clk_key
    );
	
	led <= R;

end x;
