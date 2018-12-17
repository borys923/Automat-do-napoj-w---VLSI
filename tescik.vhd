LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
ENTITY testbud IS
END testbud;
 
ARCHITECTURE budowa_a OF testbud IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT symulacja
    PORT(
         clk : IN  std_logic;
         reset : IN  std_logic;
         kasa : IN  std_logic;
         postep : OUT  std_logic
          );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal reset : std_logic := '0';
   signal kasa : std_logic := '0';
 
     --Outputs
   signal postep : std_logic;

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
    -- Instantiate the Unit Under Test (UUT)
   uut: symulacja PORT MAP (
          clk => clk,
          reset => reset,
          kasa => kasa,
          postep => postep
        );

   -- Clock process definitions
   clk_process :process
   begin
        clk <= '0';
        wait for clk_period/2;
        clk <= '1';
        wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin        
        kasa <= '1';
        reset <= '0';
        wait for clk_period;
        reset <= '1';
        wait for clk_period*22;
        kasa <= '0';
        wait for clk_period*3;
        kasa <='1';
        wait for clk_period*6;
        assert false severity failure;
   end process;

END;