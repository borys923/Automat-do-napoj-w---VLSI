
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use ieee.std_logic_unsigned.all;

entity automat is
    Port ( kawa : in  STD_LOGIC;
           czekolada : in  STD_LOGIC;
           herbata : in  STD_LOGIC;
           enter : in  STD_LOGIC;
			  reset: in  STD_LOGIC;
           gora : in  STD_LOGIC;
           dol : in  STD_LOGIC;
			  anulowanie : in  STD_LOGIC;
			  moneta1 : in  STD_LOGIC;
			  moneta2 : in  STD_LOGIC;
			  moneta5 : in  STD_LOGIC;
			  clk : IN  std_logic
			  );
end automat;

architecture Behavioral of automat is

type STANY is (czekaj, plac , licz_pieniadze, cukier, licz_reszte, wydaj_reszte, wydaj_napoj, anuluj);
signal stan,stan_nast : STANY;
signal cenak : std_logic_vector (3 downto 0) := "0010";
signal cenac : std_logic_vector (3 downto 0) := "0011";
signal cenah : std_logic_vector (3 downto 0) := "0100";
signal kasa : std_logic_vector (3 downto 0) :="0000";
 signal reszta : std_logic_vector (3 downto 0) := "0000";
 signal poziom_cukru : std_logic_vector (3 downto 0) := "0000";
begin

reg:process(clk,reset)
begin
	if (reset='1')then
		stan <=czekaj; 
	elsif(clk'Event and clk='1') then
		stan<=stan_nast;
	end if;
end process reg;

praca:process(stan, kawa, herbata, czekolada, cenak, cenac, cenah, moneta1,moneta2, moneta5, gora, dol, reszta, kasa, enter, anulowanie)
	begin
	stan_nast<= stan; 
	case stan is 
			
		when czekaj=>
			if (kawa = '1') then
				stan_nast <= plac;
			elsif (herbata = '1') then
				stan_nast <= plac;
			elsif (czekolada = '1') then
				stan_nast <= plac; 
			end if;
		when plac =>
			if ( anulowanie ='1') then
				stan_nast <= anuluj;
			elsif (kawa = '0' AND herbata = '0' and czekolada= '0') then 
				stan_nast <= czekaj;
			elsif (moneta1= '1' and (kawa = '1' or herbata = '1' or czekolada ='1')) then
				stan_nast <= licz_pieniadze;
			elsif (moneta2= '1' and (kawa = '1' or herbata = '1' or czekolada ='1')) then
				stan_nast <= licz_pieniadze;
			elsif (moneta5= '1' and (kawa = '1' or herbata = '1' or czekolada ='1')) then
				stan_nast <= licz_pieniadze;
			end if;
		
		
		when licz_pieniadze =>
			if ( anulowanie ='1' and (kasa < "0010" and kasa < "0011" and kasa < "0100" )) then
				stan_nast <= anuluj;
			elsif (kasa < "0010" and kasa < "0011" and kasa < "0100"  and anulowanie= '0') then 
				stan_nast <= plac;
			else
				stan_nast <= cukier;
			end if;
			
		
		when cukier =>
			if ( anulowanie ='1' and (enter ='1' or enter ='0')) then
				stan_nast <= anuluj;
			elsif (enter ='1' and anulowanie ='0') then
				stan_nast <= licz_reszte;
			end if;
		
		
		when licz_reszte =>
			if ( anulowanie ='1' and (reszta ="0000" or reszta /="0000")) then
				stan_nast <= anuluj;
			elsif (reszta ="0000" and anulowanie ='0' ) then
				stan_nast <= wydaj_napoj;
			elsif (reszta /="0000" and anulowanie ='0') then
				stan_nast <= wydaj_reszte;
			
			end if;
		
		when wydaj_reszte =>
			if ( reszta = "0000" and (kawa = '1' or herbata = '1' or czekolada ='1')) then
				stan_nast <= wydaj_napoj;
			elsif(anulowanie='1') then
				stan_nast <= czekaj;
			end if;
		
		when wydaj_napoj =>
			
				stan_nast <= czekaj;
		
		when anuluj =>
			if ( kasa = "0000") then
				stan_nast <= czekaj;
			elsif (kasa /= "0000" ) then
				stan_nast <= licz_reszte;
			end if;
	end case;
end process praca;	
	  
	  
	  
	  
	  licznik: process(clk,reset, dol, gora)
    begin
            if reset='1' then
                poziom_cukru <= "0000"; 
            elsif(clk'event and clk='1') then
                if(stan=cukier AND poziom_cukru /= "0000" and dol = '1') then
                    poziom_cukru<= poziom_cukru-"01";
                elsif(stan=cukier and poziom_cukru /= "1111" and gora='1')then
                    poziom_cukru<= poziom_cukru+"01";
                end if;
            end if;
    end process licznik;   
	 
	 
liczkasa: process(kasa, clk, reset, moneta1, moneta2, moneta5)
		 begin
			
			if (reset='1') then
				kasa <= "0000";
			elsif(clk'Event and clk='1') then
				if (stan=licz_pieniadze and moneta1='1') then
					kasa <= kasa+ "01";
				elsif (stan=licz_pieniadze and moneta2='1') then
					kasa <= kasa+ "010";
				elsif (stan=licz_pieniadze and moneta5='1') then
					kasa <= kasa+ "0101";
				end if;
          end if;
	 end process liczkasa;
	 
 ilereszty: process(clk, reset, kasa, reszta, czekolada, kawa, herbata, anulowanie)
		begin
			
			if (reset='1') then
				reszta <= "0000";
			elsif(clk'Event  ) then
				if (stan=licz_reszte and czekolada='1' and anulowanie ='0') then
					reszta <= kasa-"0011";
				elsif (stan=licz_reszte and kawa='1' and anulowanie ='0') then
					reszta <= kasa-"0010";
				elsif (stan=licz_reszte and herbata='1' and anulowanie ='0') then
					reszta <= kasa-"0100";
				elsif (stan=licz_reszte and anulowanie='1') then
					reszta <= kasa;
				
				end if;
          end if;
	 end process ilereszty;



	 


				
end Behavioral;

