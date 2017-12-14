----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    20:26:00 09/24/2017 
-- Design Name: 
-- Module Name:    tempcode - Behavioral 
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

entity Debounce is
    Port ( Sig : in  STD_LOGIC;
           Clk : in  STD_LOGIC;
           Debout : out  STD_LOGIC);
end Debounce;

architecture Behavioral of Debounce is
signal Q0, Q1, Q2 : STD_LOGIC :='0';

begin 
process (Clk) 
begin
if (clk='1' and clk'event) 
then
Q0 <= Sig;
Q1 <= Q0;
Q2 <= Q1;
end if;
end process;
Debout <= Q0 and Q1 and Q2;
end Behavioral;


