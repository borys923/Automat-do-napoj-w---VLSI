
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
ENTITY testautomat IS
END testautomat;
 
ARCHITECTURE behavior OF testautomat IS 
 
 
    COMPONENT automat
    PORT(
         kawa : IN  std_logic;
         czekolada : IN  std_logic;
         herbata : IN  std_logic;
         enter : IN  std_logic;
         reset : IN  std_logic;
         gora : IN  std_logic;
         dol : IN  std_logic;
         anulowanie : IN  std_logic;
         moneta1 : IN  std_logic;
         moneta2 : IN  std_logic;
         moneta5 : IN  std_logic;
         clk : IN  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal kawa : std_logic := '0'; 
   signal czekolada : std_logic := '0';
   signal herbata : std_logic := '0';
   signal enter : std_logic := '0';
   signal reset : std_logic := '0';
   signal gora : std_logic := '0';
   signal dol : std_logic := '0';
   signal anulowanie : std_logic := '0';
   signal moneta1 : std_logic := '0';
   signal moneta2 : std_logic := '0';
   signal moneta5 : std_logic := '0';
   signal clk : std_logic := '0';

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: automat PORT MAP (
          kawa => kawa,
          czekolada => czekolada,
          herbata => herbata,
          enter => enter,
          reset => reset,
          gora => gora,
          dol => dol,
          anulowanie => anulowanie,
          moneta1 => moneta1,
          moneta2 => moneta2,
          moneta5 => moneta5,
          clk => clk
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
      -- hold reset state for 100 ns.
      kawa <='1';
		wait for clk_period*2;
		moneta1 <='1';
		wait for clk_period*2;
		moneta1 <='0';
		wait for clk_period*2;
		moneta1 <='1';		
		wait for clk_period*2;
		moneta1 <='0';
		wait for clk_period*2;
		moneta1 <='1';
		wait for clk_period*2;
		moneta1 <='0';
		wait for clk_period*2;
		moneta1 <='1';
		wait for clk_period*2;
		moneta1 <='0';
		wait for clk_period*2;
		moneta1 <='1';
		wait for clk_period*2;
		moneta1 <='0';
		wait for clk_period*2;
		gora <= '1';
		wait for clk_period*2;
		gora <= '1';
		wait for clk_period*2;
		enter <= '1';
		wait for clk_period*2;
		
      

      -- insert stimulus here 

      wait;
   end process;

END;
