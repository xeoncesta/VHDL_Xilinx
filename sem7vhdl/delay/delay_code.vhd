----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    18:37:42 09/24/2017 
-- Design Name: 
-- Module Name:    delay_code - Behavioral 
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

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity delay_code is
    Port ( ip : in  STD_LOGIC;
           rst : in  STD_LOGIC;
           clk : in  STD_LOGIC;
			  d : inout  STD_LOGIC_vector(0 to 2);
           q : inout  STD_LOGIC_vector(0 to 2));
end delay_code;

architecture Behavioral of delay_code is

begin
process(ip,clk,rst)
begin
if (rst='1')
then
q<="000";
else if(clk='1' and clk'event)
then
d(0)<=ip;
q(0)<=d(0);
d(1)<=q(0);
q(1)<=d(1);
d(2)<=q(1);
q(2)<=d(2);
end if;
end if;
end process;



end Behavioral;

