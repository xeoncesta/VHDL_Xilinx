----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    17:21:18 10/29/2017 
-- Design Name: 
-- Module Name:    game1 - Behavioral 
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
use IEEE.STD_LOGIC_unsigned.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity game1 is
    Port ( sw : in  STD_LOGIC;
           clk : in  STD_LOGIC;
           clk_new : in  STD_LOGIC;
           rst : in  STD_LOGIC;
           led_w : out  STD_LOGIC;
           led_l : out  STD_LOGIC;
           led_pa : out  STD_LOGIC;
           ssd : out  STD_LOGIC_vector(8 downto 0));
end game1;


architecture Behavioral of game1 is
signal p_state,n_state: integer range 0 to 3;
signal roll_value,roll_store:integer range 0 to 6;
begin
process(p_state,sw,clk_new)
begin
case p_state is
when 0=>
if(sw='0')then
n_state<=0;led_w<='0';led_l<='0';led_pa<='0';ssd<="011110111";
roll_value<=1;roll_store<=0;
else
n_state<=1;led_w<='0';led_l<='0';led_pa<='0';ssd<="011110111";
roll_value<=1;roll_store<=0;
end if;
when 1=> if(sw='1')then
n_state<=1;
if(rising_edge(clk_new))then
if(roll_value=6)then
roll_value<=1;
else
roll_value<=roll_value +1;
end if;
end if;
else
n_state<=2;led_pa<='1';roll_store<=roll_value;--storing 1 value
end if;
when 2=> --ssd o/p
if(roll_value=1)then ssd<="011111001";
elsif(roll_value=2)then ssd<="010100100";
elsif(roll_value=3)then ssd<="010110000";
elsif(roll_value=4)then ssd<="011100110";
elsif(roll_value=5)then ssd<="011101101";
else ssd<="010000010";
end if;
if(sw='0')then--keep the display on
n_state<=2;
else
n_state<=3;--sw=1
end if;
when 3=> if(sw='1')then
n_state<=3;
if(rising_edge(clk_new))then
if(roll_value=6)then
roll_value<=1;
else
roll_value<=roll_value+1;
end if;
end if;
else --
n_state<=0;led_pa<='0';
if(roll_store=roll_value)then
led_w<='1';led_l<='0';
else
led_w<='0';led_l<='1';
end if;
end if;
end case;
end process;

process(clk,rst)
begin
if(rst='1')then
p_state<=0;
elsif(rising_edge(clk))then
p_state<=n_state;
end if;
end process;
end Behavioral;

