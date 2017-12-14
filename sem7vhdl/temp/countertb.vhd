--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   22:01:43 09/24/2017
-- Design Name:   
-- Module Name:   C:/Users/Administrator/Documents/sem7vhdl/temp/countertb.vhd
-- Project Name:  temp
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: counter
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY countertb IS
END countertb;
 
ARCHITECTURE behavior OF countertb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT counter
    PORT(
         Clk : IN  std_logic;
         CLR : IN  std_logic;
         E : IN  std_logic;
         Q : OUT  std_logic_vector(3 downto 0)
        );
    END COMPONENT;
    
	 

   --Inputs
   signal Clk : std_logic := '0';
   signal CLR : std_logic := '0';
   signal E : std_logic := '0';

 	--Outputs
   signal Q : std_logic_vector(3 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
   --constant <clock>_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: counter PORT MAP (
          Clk => Clk,
          CLR => CLR,
          E => E,
          Q => Q
        );

   -- Clock process definitions
--   <clock>_process :process
--   begin
--		<clock> <= '0';
--		wait for <clock>_period/2;
--		<clock> <= '1';
--		wait for <clock>_period/2;
--   end process;
-- 


   -- Stimulus process
   process
	begin
	wait for 1000ns;
	CLR<='1';
	end process;
	stim_proc: process
   begin		
           --CLR<='0';
			  E<='1';
        Clk<='1';
        wait for 50 ns;   
      Clk<='0';
        wait for 50 ns;   
		  
        --Sig<='0';
		
		
		
        --Clk<='1';
		  --CLR<='1';
       -- wait for 50 ns;   
		  
      --Clk<='0';
		
		
		
		
            -- wait for 50 ns;   

   end process;
	
	

END;
