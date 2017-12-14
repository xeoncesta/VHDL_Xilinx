--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   16:25:35 10/29/2017
-- Design Name:   
-- Module Name:   C:/Users/Administrator/Documents/sem7vhdl/switchdebounce2/debouncetb.vhd
-- Project Name:  switchdebounce2
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: debounce2
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
 
ENTITY debouncetb IS
END debouncetb;
 
ARCHITECTURE behavior OF debouncetb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT debounce2
    PORT(
         button : IN  std_logic;
         clk : IN  std_logic;
         res : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal button : std_logic := '0';
   signal clk : std_logic := '0';

 	--Outputs
   signal res : std_logic;

   -- Clock period definitions
  -- constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: debounce2 PORT MAP (
          button => button,
          clk => clk,
          res => res
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for 10 ns;
		clk <= '1';
		wait for 10 ns;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      --wait for 100 ns;	
  button<='1';
  wait for 100 ns;
      
      -- insert stimulus here 

      wait;
   end process;

END;
