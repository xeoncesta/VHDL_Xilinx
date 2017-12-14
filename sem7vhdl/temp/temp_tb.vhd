--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   20:29:09 09/24/2017
-- Design Name:   
-- Module Name:   C:/Users/Administrator/Documents/sem7vhdl/temp/temp_tb.vhd
-- Project Name:  temp
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: Debounce
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
 
ENTITY temp_tb IS
END temp_tb;
 
ARCHITECTURE behavior OF temp_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT Debounce
    PORT(
         Sig : IN  std_logic;
         Clk : IN  std_logic;
         Debout : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal Sig : std_logic := '0';
   signal Clk : std_logic := '0';

 	--Outputs
   signal Debout : std_logic;

   -- Clock period definitions
   --constant Clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: Debounce PORT MAP (
          Sig => Sig,
          Clk => Clk,
          Debout => Debout
        );

   -- Clock process definitions
--   Clk_process :process
--   begin
--		Clk <= '0';
--		wait for Clk_period/2;
--		Clk <= '1';
--		wait for Clk_period/2;
--   end process;
-- 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      Sig<='1';
		Clk<='1';
		wait for 5 ns;	
      Clk<='0';
		wait for 5 ns;	
		--Sig<='0';
		Clk<='1';
		wait for 5 ns;	
      Clk<='0';
				wait for 5 ns;	



--Sig<='0';
		Clk<='1';
		wait for 5 ns;	
      Clk<='0';
		wait for 5 ns;	
		Sig<='0';
		Clk<='1';
		wait for 5 ns;	
      Clk<='0';
				wait for 5 ns;	

		
      -- insert stimulus here 

      --wait;
   end process;

END;
