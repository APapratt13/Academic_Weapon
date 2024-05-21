library ieee;
use ieee.std_logic_1164.all;
use ieee.std_logic_unsigned.all;

entity count is
    port (
	clk_25m: in std_logic;
	btn_right: in std_logic;
	btn_left: in std_logic;
	sw: in std_logic_vector(3 downto 0);
	led: out std_logic_vector(7 downto 0)
    );
end count;

architecture x of count is
    signal R_left: std_logic_vector(3 downto 0);
    signal R_right: std_logic_vector(3 downto 0);
    signal clk_key: std_logic;
    signal N: std_logic_vector(7 downto 0);
    signal btns: std_logic;
 
begin

	N <= "00010000"; -- 16
			
    process(clk_key)
    begin
	if rising_edge(clk_key) then
	
		if btn_left = '1' then
		
			if sw(3) = '1' then
				R_left <= R_left - 1;
			elsif sw(3) = '0' then
				R_left <= R_left  + 1;
			end if;
			
			led(7 downto 4) <= R_left;
		elsif btn_right = '1' then
		
			if sw(0) = '1' then
				R_right <= R_right - 1;
			elsif sw(0) = '0' then
				R_right <= R_right + 1;
			end if;
			
			led(3 downto 0) <= R_right;
		end if;
		
	end if;

    end process;
    
    btns <= btn_left or btn_right;
    
    I_debouncer: entity work.debouncer port map (
    clk => clk_25m, 
    key => btns, 
    debounced => clk_key
    );
	
end x;
