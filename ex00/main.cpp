#include "ClapTrap.hpp"

int main()
{
	ClapTrap clapTrap("boutfli9a", 10,10,10);
	clapTrap.takeDamage(10);
	clapTrap.beRepaired(10);
	clapTrap.attack("khona li mabghash ifte7 l7odod");
	ClapTrap pakhaman("pakhaman", 100, 1, 10);
	pakhaman.takeDamage(10);
	pakhaman.beRepaired(10);
	pakhaman.attack("botfli9a");
	pakhaman.attack("botfli9a");
}