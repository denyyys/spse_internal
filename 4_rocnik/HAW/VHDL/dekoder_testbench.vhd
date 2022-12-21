--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   09:13:48 12/21/2022
-- Design Name:   
-- Module Name:   /home/q09/Desktop/mynari-4B/vhdl_primer/dekoder_testbench.vhd
-- Project Name:  vhdl_primer
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: dekoder
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY dekoder_testbench IS
END dekoder_testbench;
 
ARCHITECTURE behavior OF dekoder_testbench IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT dekoder
    PORT(
         number : IN  std_logic_vector(3 downto 0);
         segment : OUT  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal number : std_logic_vector(3 downto 0) := (others => '0');

 	--Outputs
   signal segment : std_logic_vector(7 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
   
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: dekoder PORT MAP (
          number => number,
          segment => segment
        );

   -- Clock process definitions
   
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	-- vlozeni cisla 4bit cisla
		number <= "0010";
		wait for 100 ns;	
		number <= "0001";
		wait for 100 ns;	
		number <= "1001";
  

      -- insert stimulus here 

      wait;
   end process;

END;
