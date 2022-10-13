
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY testbench IS
END testbench;
 
ARCHITECTURE behavior OF testbench IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT alarm_zamek
    PORT(
         zarizeni : IN  std_logic;
         dvere : IN  std_logic;
         okno : IN  std_logic;
         alarm : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal zarizeni : std_logic := '0';
   signal dvere : std_logic := '0';
   signal okno : std_logic := '0';

 	--Outputs
   signal alarm : std_logic;
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
--   constant <clock>_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: alarm_zamek PORT MAP (
          zarizeni => zarizeni,
          dvere => dvere,
          okno => okno,
          alarm => alarm
        );

   -- Clock process definitions
   <clock>_process :process
   begin
--		<clock> <= '0';
--		wait for <clock>_period/2;
--		<clock> <= '1';
--		wait for <clock>_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
	
      wait for 100 ns;	

--      wait for <clock>_period*10;

      

      wait;
   end process;

END;
