library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_1164.ALL;
use ieee.std_logic_unsigned.all;

entity symulacja is
    Port ( clk : in  STD_LOGIC;
           reset : in  STD_LOGIC;
           kasa : in  STD_LOGIC;
           postep : out  STD_LOGIC);
end symulacja;

architecture budowa_a of symulacja is

type STANY is (fajrant,transit,pod_cegle,cegla);
signal stan,stan_nast : STANY;
signal zapas    : std_logic_vector (2 downto 0);

begin
    reg:process(clk,reset)
    begin
        if(reset='0')then
            stan<= fajrant;
        elsif(clk'Event and clk ='1') then
            stan<=stan_nast;
        end if;
    end process reg;
    
    komb:process(stan,kasa,zapas)
    begin
        stan_nast <=stan;
        case stan is
        
            when fajrant=>
                if(kasa='1' and zapas ="000") then
                    stan_nast<=transit;
                elsif (kasa ='1' and zapas/="000") then
                    stan_nast <= pod_cegle;
                end if;
                
            when transit=>
                if(kasa='1' and zapas /="000") then
                    stan_nast<=pod_cegle;
            
                else 
                    stan_nast<=fajrant;
                end if;
                
            when pod_cegle =>
                if(kasa='1' and zapas /="000") then
                    stan_nast <= cegla;
                    elsif (kasa='0') then
                        stan_nast <= fajrant;
                    else
                        stan_nast <= transit;
                end if;
            
            
        when cegla =>
            if (kasa='1') then
                stan_nast<= pod_cegle;
            else
                stan_nast<= fajrant;
            end if;
                
                
            
        end case;
    end process komb;
    
    licznik: process(clk,reset)
    begin
            if reset='0' then
                zapas<="000";
            elsif(clk'event and clk='1') then
                if(stan=pod_cegle AND zapas /= "000") then
                    zapas<= zapas-1;
                elsif(stan=transit)then
                    zapas<="111";
                end if;
            end if;
    end process licznik;

    postep<= '1' when stan = cegla else '0';


end budowa_a;


