----------------------------------------------------------------------------------
-- Company: Kybl Enterprise
-- Create Date:    09:54:08 12/21/2022 
-- Module Name:    iftest - Behavioral 
-- Project Name: iftest
-- Description: ukazka funkce if ve vhdl

----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity iftest is
    Port ( cislo : in  STD_LOGIC_VECTOR (3 downto 0);
           enable : in  STD_LOGIC;
           volno : out  STD_LOGIC);
end iftest;

architecture Behavioral of iftest is

begin

process (cislo,enable)
begin
   if enable = '1' then
      if cislo = "0010" then
			volno <= '1';
			
		else
			volno <= '0';
		end if;
		
   else
      volno <= '0';
   end if;
	
end process;

end Behavioral;

