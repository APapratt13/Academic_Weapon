library ieee;
use ieee.std_logic_1164.all;
use ieee.std_logic_unsigned.all;
use ieee.std_logic_arith.all;

entity alu is 
	port (
		A, B: in std_logic_vector(3 downto 0);
		ALUOp: in std_logic_vector(2 downto 0);
		Z: out std_logic_vector(3 downto 0)
	);
end alu;

architecture arch of ALU is 
	signal xorr: std_logic_vector(3 downto 0);
	signal norr: std_logic_vector(3 downto 0);
	signal addd: std_logic_vector(3 downto 0);
	signal subb: std_logic_vector(3 downto 0);
	signal srll: std_logic_vector(3 downto 0);
	signal andd: std_logic_vector(3 downto 0);
	signal mull: std_logic_vector(7 downto 0); -- kada mnozimo dobije 8 bitova
	signal orr:  std_logic_vector(3 downto 0);
	
	begin 
		xorr <= A xor B;
		norr <= not (A or B);
		addd <= A + B;
		subb <= A - B;
		srll <= shr(A, B); -- shift rigtht, pomice 
		andd <= A and B;
		mull <= A * B;
		orr  <= A or B;
		
		with ALUOp select
		Z <=
			xorr when "000",
			norr when "001",
			addd when "010",
			subb when "011",
			srll when "100",
			andd when "101",
			mull(3 downto 0) when "110", -- gledamo samo zadnja 4
			orr  when "111";

end arch;