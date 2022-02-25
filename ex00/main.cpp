#include "ClapTrap.hpp"

int main()
{
	ClapTrap clapTrap("boutfli9a");
	clapTrap.attack("khona li mabghash ifte7 l7odod");
	clapTrap.takeDamage(5);
	clapTrap.beRepaired(10);
	clapTrap.takeDamage(80);
	clapTrap.attack("khona li mabghash ifte7 l7odod");
	clapTrap.takeDamage(80);
	clapTrap.printStats();
	ClapTrap skhayfa("skhayfa", 100,1,20);
	skhayfa.attack("botfli9a");
	skhayfa.attack("botfli9a");
	skhayfa.printStats();
}