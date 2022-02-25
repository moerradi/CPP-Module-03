#include "ScavTrap.hpp"

int main()
{
	ScavTrap bot("boutfli9a");
	bot.attack("khona li mabghash ifte7 l7odod");
	bot.takeDamage(20);
	bot.beRepaired(30);
	bot.guardGate();
	bot.takeDamage(150);
	bot.attack("khona li mabghash ifte7 l7odod");
	bot.takeDamage(80);
	bot.printStats();
	return 0;
}