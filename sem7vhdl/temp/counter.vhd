----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    22:00:19 09/24/2017 
-- Design Name: 
-- Module Name:    counter - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use ieee.std_logic_unsigned.all;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity counter is
    Port ( Clk : in  STD_LOGIC;
           CLR : in STD_LOGIC;
			 E : in  STD_LOGIC;
           Q : out  STD_LOGIC_VECTOR(3 downto 0));
end counter;

architecture Behavioral of counter is
signal temp: std_logic_vector(3 downto 0);
begin
process(Clk,CLR)
begin 
if (CLR='1') then
temp<= "0000"; 
else if (Clk'event and Clk='1')then
if (E='1' and temp <="1111") then 
temp <= temp + 1;
--else if(temp>"1111")then
--temp<="0000";
--
--end if;
end if;
end if;
end if;
end process;
Q <= temp;


end Behavioral;
