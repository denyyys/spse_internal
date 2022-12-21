--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   10:00:03 12/21/2022
-- Design Name:   
-- Module Name:   /home/q09/Desktop/mynari-4B/vhdl_primer/iftest_testbench.vhd
-- Project Name:  vhdl_primer
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: iftest
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
 
 
ENTITY iftest_testbench IS
END iftest_testbench;
 
ARCHITECTURE behavior OF iftest_testbench IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT iftest
    PORT(
         cislo : IN  std_logic_vector(3 downto 0);
         enable : IN  std_logic;
         volno : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal cislo : std_logic_vector(3 downto 0) := (others => '0');
   signal enable : std_logic := '0';

 	--Outputs
   signal volno : std_logic;
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: iftest PORT MAP (
          cislo => cislo,
          enable => enable,
          volno => volno
        );

   -- Clock process definitions
  
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;
		enable <= '1';
		cislo <= "0010";
		
		cislo <= "1000";

      -- insert stimulus here 

      wait;
   end process;

END;
