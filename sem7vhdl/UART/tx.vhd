----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    21:41:33 10/29/2017 
-- Design Name: 
-- Module Name:    tx - Behavioral 
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

entity tx is
    Port ( bclk : in  STD_LOGIC;
           sysclk : in  STD_LOGIC;
           rst_b : in  STD_LOGIC;
           tdre : in  STD_LOGIC;
           loadtdr : in  STD_LOGIC;
           dbus : in  STD_LOGIC_vector(7 downto 0);
           settdre : out  STD_LOGIC;
           txd : out  STD_LOGIC);
end tx;

architecture Behavioral of tx is
type statetype is(idle,synch,tdata);
signal 

begin


end Behavioral;

