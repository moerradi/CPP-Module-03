#include "ScavTrap.hpp"

int main()
{
	ClapTrap jomi("Jomi");
	ScavTrap mike("Mike");
	jomi.printStats();
	mike.printStats();
	jomi.takeDamage(10);
	jomi.printStats();
	mike.attack("Jomi");
	mike.printStats();
	jomi.attack("Mike");
}