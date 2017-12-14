----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    16:59:32 10/29/2017 
-- Design Name: 
-- Module Name:    prng - Behavioral 
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

entity prng is
    Port ( clk : in  STD_LOGIC;
           rst : in  STD_LOGIC;
           rnum : out  STD_LOGIC_vector(7 downto 0));
end prng;

architecture Behavioral of prng is
signal ff:std_logic_vector(7 downto 0);
signal temp:std_logic:='0';

begin
temp <= ff(4)xor ff(3) xor ff(2) xor ff(0);
process(clk,rst)
begin
if(rst='1')
then
ff<="00000001";
elsif(rising_edge(clk))then
ff<=temp & ff(7 downto 1);
end if;
end process;
rnum<=ff;
end Behavioral;

