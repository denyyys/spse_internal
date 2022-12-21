--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   08:18:21 12/21/2022
-- Design Name:   
-- Module Name:   /home/q09/Desktop/mynari-4B/vhdl_primer/nand4_testbench.vhd
-- Project Name:  vhdl_primer
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: nand4
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
 
ENTITY nand4_testbench IS
END nand4_testbench;
 
ARCHITECTURE behavior OF nand4_testbench IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT nand4
    PORT(
         a : IN  std_logic;
         b : IN  std_logic;
         c : IN  std_logic;
         d : IN  std_logic;
         y : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal a : std_logic := '0';
   signal b : std_logic := '0';
   signal c : std_logic := '0';
   signal d : std_logic := '0';

 	--Outputs
   signal y : std_logic;
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
   
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: nand4 PORT MAP (
          a => a,
          b => b,
          c => c,
          d => d,
          y => y
        );

   -- Clock process definitions

 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 1 ns;	
		a <= '1';
		wait for 1 ns;
		b <= '1';
		wait for 1 ns;
		c <= '1';
		wait for 1 ns;
		d <= '1';
		
		wait for 1 ns;	
		a <= '0';
		wait for 1 ns;
		b <= '0';
		wait for 1 ns;
		c <= '0';
		wait for 1 ns;
		d <= '0';
		

      -- insert stimulus here 

      wait;
   end process;

END;
