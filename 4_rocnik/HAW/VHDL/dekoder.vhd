----------------------------------------------------------------------------------
-- Company: Kybl Enterprise
-- Engineer: 
-- 
-- Create Date:    09:07:02 12/21/2022 
-- Module Name:    dekoder - Behavioral 
-- Project Name: 7-segment dekoder
-- Description: 

----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity dekoder is
    Port ( number : in  STD_LOGIC_VECTOR (3 downto 0);
           segment : out  STD_LOGIC_VECTOR (7 downto 0));
end dekoder;

architecture Behavioral of dekoder is

begin
    with number SELect -- prevod 4bit na 7 segment
segment<="11110011" when "0001",   --1
         "01001001" when "0010",   --2
         "01100001" when "0011",   --3
         "00110011" when "0100",   --4
         "00100101" when "0101",   --5
         "00000101" when "0110",   --6
         "11110001" when "0111",   --7
         "00000001" when "1000",   --8
         "00100001" when "1001",   --9
         "00010001" when "1010",   --A
         "00000111" when "1011",   --b
         "10001101" when "1100",   --C
         "01000011" when "1101",   --d
         "00001101" when "1110",   --E
         "00011101" when "1111",   --F
         "10000001" when others;   --0

end Behavioral;

