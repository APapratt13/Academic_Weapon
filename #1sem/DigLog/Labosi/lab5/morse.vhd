library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity morse is
    port(
	clk, rst, l, r: in std_logic;
	m: out std_logic
    );
end morse;

architecture mealy of morse is
    constant s0: std_logic_vector(2 downto 0) := "000";
    constant a1: std_logic_vector(2 downto 0) := "001";
    constant a2: std_logic_vector(2 downto 0) := "010";
    constant p3: std_logic_vector(2 downto 0) := "011";
    constant p4: std_logic_vector(2 downto 0) := "100";
    constant p5: std_logic_vector(2 downto 0) := "101";
    constant p6: std_logic_vector(2 downto 0) := "110";
    
    signal R_state, R_timer: std_logic_vector(2 downto 0);

    signal new_state: std_logic_vector(2 downto 0);
    signal state_we: std_logic;

begin
    -- Timer, FSM state registers
    process(clk, rst)
    begin
	if rising_edge(clk) then
		if rst = '1' then
		    R_state <= (others => '0');
		    R_timer <= (others => '0');
		else
		    if state_we = '1' then
			R_state <= new_state;
			R_timer <= (others => '0');
		    else
			R_timer <= std_logic_vector(signed(R_timer) + 1);
		    end if;
		end if;
	end if;
    end process;

    -- FSM combinatorial logic: 
    -- "A" = .-     "P" = .--.
    process(R_state, R_timer, l)
    begin
	-- Defaults, overriden later by case / when sections when appropriate
	new_state <= std_logic_vector(signed(R_state) + 1);
	state_we <= '1';
	m <= '0';

	case R_state is
        when s0 =>
            if ((l = '0') and (r = '0')) then
                new_state <= s0;
            elsif l = '1' then
                new_state <= a1;
	    elsif r = '1' then
                new_state <= p3;
	    else
		new_state <= s0;
            end if;
	    
	when a1 | p3 =>
	    if R_timer /= "001" then
		m <= '1';
		state_we <= '0';
	    end if;
	    
	when p4 | p5 =>
	    if R_timer /= "011" then
		m <= '1';
		state_we <= '0';
	    end if;
	    
	when a2 =>
	    if R_timer /= "011" and R_timer /= "100" then
		m <= '1';
	    end if;
	    if R_timer /= "100" then
		state_we <= '0';
	    end if;
	    new_state <= s0;
	    
	when p6 =>
	    if R_timer /= "001" and R_timer /= "010" then
		m <= '1';
	    end if;
	    if R_timer /= "010" then
		state_we <= '0';
	    end if;
	    new_state <= s0;
	    
	when others =>
	    -- new_state <= s0;
	    state_we <= '0';
	end case;
    end process;
end mealy;
