library ieee;
use ieee.std_logic_1164.all;

entity slova is
    port (
        btn_f1, btn_left, btn_down, btn_up, btn_right: in std_logic;
	rs232_tx: out std_logic;
	clk_25m: in std_logic;
        led: out std_logic_vector(7 downto 0);
	sw: in std_logic_vector (3 downto 0) -- ako stavim out ide greska jer mu je to input a ne output
    );
end slova;

-- Kod instanciranja modula "brojke" unutar modula "slova", treba povezati izlaze "brojke" 
-- s odgovarajuæim dijelovima "slova". Ovo se postiže korištenjem port map direktive. Svaki 
-- izlaz iz modula "brojke" mora biti povezan s odgovarajuæim signalom unutar modula "slova" 
-- koji æe koristiti te podatke
-- -> treba napraviti skretnicu koja ce odabirati kada su slova a kada brojke = MULTIPLEKSOr

architecture behavioral of slova is
    signal code: std_logic_vector(7 downto 0);
    signal btns: std_logic_vector(4 downto 0); -- 5 tipki
    signal mulx1: std_logic_vector(7 downto 0); 
    signal mulx2: std_logic_vector(7 downto 0);
    signal mulx3: std_logic_vector(7 downto 0);

begin

    btns <= btn_f1 & btn_left & btn_down & btn_up & btn_right; -- ULX3S

    with btns select 
    mulx1 <= -- u staroj verziji to je code ali buduci da code poprima vrijednost od mux1 samo ako je sw '0' onda treba re definirati
        "00000000" when "00000", -- ASCII NULL
	"00000000" when "10000", -- ASCII NULL = za f1
        "01000001" when "01000", -- ASCII A = za left
	"01101110" when "00100", -- ASCII n = za down
	"01110100" when "00010", -- ASCII t = za up
	"01100101" when "00001", -- ASCII e = za right
	"01010000" when "11000", -- ASCII P = za f1 + left
	"01100001" when "10100", -- ASCII a = za f1 + down
	"01110010" when "10010", -- ASCII r = za f1 + up
	"01100001" when "10001", -- ASCII a = za f1 + right
	"--------" when others ; -- don't care
	
	with sw select
	code <= 
	mulx1 when "0001",
	mulx2 when "0011",
	mulx3 when others ;

    led <= code;

    serializer: entity serial_tx port map (
	clk => clk_25m, byte_in => code, ser_out => rs232_tx
    );
    
    br: entity brojke port map( -- br predstavlja entitet brojke i koristi se za povezivanje ulaza i izlaza izmeðu entiteta slova i brojke
    ap_code => mulx2, -- kao sto je gore definiran mux1, tako smo i ovdje definirali da je mux2 zapravo izlaz od brojki ako je sw '1'
    ap_f1 => btn_f1, -- ovdje (i nadalje) pokazujem da je u brojkama ap_f1 zapravi isto sto i btn_f1 u slovima
    ap_left => btn_left, 
    ap_down => btn_down, 
    ap_up => btn_up,
    ap_right => btn_right
    );
    
    cap: entity kapa port map( 
    xm_code => mulx3, 
    xm_f1 => btn_f1, 
    xm_left => btn_left, 
    xm_down => btn_down, 
    xm_up => btn_up,
    xm_right => btn_right
    );
    
end;
