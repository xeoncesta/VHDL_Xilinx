----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    23:22:29 10/29/2017 
-- Design Name: 
-- Module Name:    scan - Behavioral 
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

entity scanner is 
port (R0, R1,R2, R3, CLK: in std_logic ;
            C0,C1,C2:  inout std_logic;
           N0,N1,N2,N3, V: out std_logic) ;
end scanner;
architecture behaviour of scanner is 
signal QA, K,Kd:std_logic;
signal  state ,nextstate: integer range 0 to 5;
signal temp1,temp2:std_logic:='0';

begin

K<=(R0 or R1 or R3);   --this is the decoder section
N3 <=((R2 and (not(C0))) or (R3 and (not(C1))));
N2  <=  (R1 or R2)and C0;
temp1<=not(R1)and(not(R0)and C0);
temp2<=(not(R2)and C2)or temp1;
N1  <= (R0 and(not(C0)))or temp2;

N0  <= ((R1 and C1) or (not (R1) and C2) or (not (R3) and not (R1) and not (C1)));
process (state , R0,R1,R2,R3,C0,C1,C2,K,Kd,QA)
begin 
C0 <=   '0'  ;  C1  <= '0' ;  C2 <= '0' ;    V  <=   '0';

case state is 
when  0  => 
nextstate <= 1;
when  1 =>  
C0  <= '1' ; C1  <='1'  ; C2  <='1' ;
if ((Kd and K)  ='1' )then
 nextstate <=2;
else nextstate  <=1;
end if ;
when 2  => 
C0<=  '1' ;
if ((Kd and K)  ='1') 
then V  <='1' ;
nextstate<=5;
elsif K  = '0' then nextstate <= 3;
else nextstate <=2;
end if ;
when 3  =>  
C1  <=  '1';
if  ((Kd and K) = '1' )
 then 
 V  <=  '1' ;
 nextstate <=5;
elsif K ='0'  
then nextstate <=4;

else nextstate <=3;
end if;
when 4  =>  
C2 <='1';
if ((Kd and K) ='1') 
then  V <='1'; nextstate <= 5;
else nextstate <=4;
end if;
when 5 =>  C0<= '1';  C1  <=  '1';  C2  <= '1';
if  Kd = '0' then nextstate <= 1;
else nextstate   <=5;
end if ;
end case;
end process;
process (CLK)
begin 
if (CLk = '1' and ClK'EVENT) then 
state <= nextstate;
QA   <= K;
Kd   <= QA;
end if; 
end process;
end behaviour;  

