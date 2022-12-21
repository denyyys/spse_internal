----------------------------------------------------------------------------------
-- Company: Kybl Enterprise 
--
--
-- Create Date:    08:11:08 12/21/2022 
-- Module Name:    nand4 - Behavioral 
-- Project Name: NAND4
-- Target Devices: 
-- Description: 4 vstupovy NAND
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL; 	-- standard pro logiku VHDL (import)

entity nand4 is					-- inputy a outputy
    Port ( a : in  STD_LOGIC;
           b : in  STD_LOGIC;
           c : in  STD_LOGIC;
           d : in  STD_LOGIC;
           y : out  STD_LOGIC);
end nand4;

architecture Behavioral of nand4 is

begin
	y <= NOT(a AND b AND c AND d);
	-- dalsi moznost (wrong prej ale funguje)
	-- x <= a NAND b;
	-- z <= c NAND d;
	-- y <= a AND b;

end Behavioral;

