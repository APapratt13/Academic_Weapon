library ieee;
use ieee.std_logic_1164.all;
use ieee.std_logic_unsigned.all;

entity morse_top is
    generic(
	C_clk_freq: integer := 25000000
    );
    port(
	clk_25m: in std_logic;
	btn_left, btn_right, btn_up: in std_logic;
	sw: in std_logic_vector(3 downto 0);
	led: out std_logic_vector(7 downto 0);
	rs232_tx: out std_logic;
	p_tip, p_ring: out std_logic_vector(3 downto 0)
    );
end morse_top;

architecture struct of morse_top is
    signal R_clk_div: integer;
    signal R_led, R_ascii: std_logic_vector(7 downto 0);
    signal R_symbol_clk: std_logic;
    signal midi_code: std_logic_vector(6 downto 0);
    signal symbol_clk, morse, tone: std_logic;
begin
    -- Morse FSM instance
    fsm: entity work.morse port map (
	clk => symbol_clk, rst => btn_up,
	l => btn_left, r => btn_right, m => morse
    );

    -- Symbol clock generator
    process(clk_25m)
    begin
    if rising_edge(clk_25m) then
	R_clk_div <= R_clk_div - 1;
	if R_clk_div = 0 then
	    case sw(1 downto 0) is
	    when "00" => R_clk_div <= C_clk_freq / 8;
	    when "01" => R_clk_div <= C_clk_freq / 12;
	    when "10" => R_clk_div <= C_clk_freq / 16;
	    when others => R_clk_div <= C_clk_freq / 20;
	    end case;
	    R_symbol_clk <= not R_symbol_clk;
	end if;
    end if;
    end process;
    symbol_clk <= not R_symbol_clk;

    -- Shift register for tracking dots and dashes on LED indicators
    R_led <= R_led(6 downto 0) & morse when rising_edge(symbol_clk);
    led <= R_led;

    -- Send ASCII chars via RS232 / USB to terminal emulator
    process(symbol_clk, R_led)
    begin
    if symbol_clk = '1' then
	if R_led(2 downto 0) = "010" then
	    R_ascii <= x"2a";  -- "*"
	elsif R_led(2 downto 0) = "011" or
	  R_led(3 downto 0) = "0111" or
	  R_led(4 downto 0) = "01110" then
	    R_ascii <= x"3d"; -- "="
	elsif R_led(2 downto 0) = "101" then
	    R_ascii <= x"20"; -- " "
	elsif R_led(3 downto 1) = "100" then
	    R_ascii <= x"0d"; -- CR
	elsif R_led(2 downto 0) = "100" then
	    R_ascii <= x"0a"; -- LF
	else
	    R_ascii <= x"00";
	end if;
    else
	R_ascii <= x"00";
    end if;
    end process;
    serializer: entity serial_tx port map (
	clk => clk_25m, byte_in => R_ascii, ser_out => rs232_tx
    );

    -- Tone gate, MIDI A5 = code 81 = 880 Hz
    midi_code <= "1010001" when morse = '1' else (others => '0');

    -- Tone generator
    tonegen: entity work.tonegen port map (
	clk => clk_25m, code => midi_code, volume => sw(3 downto 2),
	tone_out => tone
    );
    
    -- Phone output
    p_tip <= (others => tone);
    p_ring <= (others => tone);
end struct;
