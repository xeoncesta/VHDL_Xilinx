--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   17:08:38 10/29/2017
-- Design Name:   
-- Module Name:   C:/Users/Administrator/Documents/sem7vhdl/lfsr/tblfsr.vhd
-- Project Name:  lfsr
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: prng
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
 
ENTITY tblfsr IS
END tblfsr;
 
ARCHITECTURE behavior OF tblfsr IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT prng
    PORT(
         clk : IN  std_logic;
         rst : IN  std_logic;
         rnum : OUT  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal rst : std_logic := '0';

 	--Outputs
   signal rnum : std_logic_vector(7 downto 0);

   -- Clock period definitions
  -- constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: prng PORT MAP (
          clk => clk,
          rst => rst,
          rnum => rnum
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
      wait for 10 ns;
rst<='1'	;	

      wait for 10 ns;
rst<='0';
      -- insert stimulus here 

      wait;
   end process;

END;