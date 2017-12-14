----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    17:39:57 09/24/2017 
-- Design Name: 
-- Module Name:    sipo_code - Behavioral 
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

entity sipo_code is
    Port ( ip : in  STD_LOGIC;
           clk : in  STD_LOGIC;
           rst : in  STD_LOGIC;
           q : inout  STD_LOGIC_VECTOR(0 to 5));
end sipo_code;

architecture Behavioral of sipo_code is

begin
one:process(ip,rst,clk)
begin
if(rst='1')
then
q<="000000";
else if(clk='1' and clk'event)
then
q(0)<=ip;
q(1)<=q(0);
q(2)<=q(1);
q(3)<=q(2);
q(4)<=q(3);
q(5)<=q(4);
--q(6)<=q(5);
end if;
end if;
end process;

end Behavioral;

