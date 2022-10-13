
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity alarm_zamek is
    Port ( z: in  STD_LOGIC;
           d: in  STD_LOGIC;
           o: in  STD_LOGIC;
           a: out  STD_LOGIC);
end alarm_zamek;

architecture Behavioral of alarm_zamek is

begin
process (z,o,d)
begin
	if d='1' and z='1' then a<='1';
	elsif o='1' and z='1' then a<='1';
	else a<='0';
	end if;
end process;

end Behavioral;