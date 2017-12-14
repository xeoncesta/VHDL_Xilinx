--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   17:49:47 09/24/2017
-- Design Name:   
-- Module Name:   C:/Users/Administrator/Documents/sem7vhdl/sipo_reg/sipo_tb.vhd
-- Project Name:  sipo_reg
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: sipo_code
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
 
ENTITY sipo_tb IS
END sipo_tb;
 
ARCHITECTURE behavior OF sipo_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT sipo_code
    PORT(
         ip : IN  std_logic;
         clk : IN  std_logic;
         rst : IN  std_logic;
         q : INOUT  std_logic_vector(0 to 5)
        );
    END COMPONENT;
    

   --Inputs
   signal ip : std_logic := '0';
   signal clk : std_logic := '0';
   signal rst : std_logic := '0';

	--BiDirs
   signal q : std_logic_vector(0 to 5);

   -- Clock period definitions
   --constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: sipo_code PORT MAP (
          ip => ip,
          clk => clk,
          rst => rst,
          q => q
        );

   -- Clock process definitions
--   clk_process :process
--   begin
--		clk <= '0';
--		wait for clk_period/2;
--		clk <= '1';
--		wait for clk_period/2;
--   end process;
-- 
--
--   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      ip<='1';
		clk<='1';
		wait for 10 ns;	
      clk<='0';
		wait for 10 ns;	
		ip<='0';
		clk<='1';
		wait for 10 ns;	
      clk<='0';
				wait for 10 ns;	

		ip<='0';
		clk<='1';
		wait for 10 ns;	
      clk<='0';
				wait for 10 ns;	

		ip<='0';
		clk<='1';
		wait for 10 ns;	
      clk<='0';
				wait for 10 ns;	

		ip<='1';
		clk<='1';
		wait for 10 ns;	
      clk<='0';
				wait for 10 ns;	

		ip<='1';
		clk<='1';
		wait for 10 ns;	
      
      --wait for clk_period*10;

      -- insert stimulus here 

      --wait;
   end process;

END;
