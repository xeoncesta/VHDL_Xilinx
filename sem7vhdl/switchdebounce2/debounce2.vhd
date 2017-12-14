----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:52:55 10/29/2017 
-- Design Name: 
-- Module Name:    debounce2 - Behavioral 
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
use ieee.std_logic_unsigned.all;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity debounce2 is
    Port ( button : in  STD_LOGIC;
           clk : in  STD_LOGIC;
           res : out  STD_LOGIC);
end debounce2;

architecture Behavioral of debounce2 is
signal ff:std_logic_vector(1 downto 0);
signal count_out:std_logic_vector(2 downto 0);
signal count_clr:std_logic;
begin
count_clr<=ff(1) xor ff(0);
process(button,clk)
begin
if(rising_edge(clk))
then

ff(0)<=button;
ff(1)<=ff(0);
if(count_clr='1')
then
count_out<=(others=>'0');
elsif (count_out(2)='0')
then
count_out<=count_out + '1';
else
res<=ff(1);
end if;
end if;
end process;
end Behavioral;

