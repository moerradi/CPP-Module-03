#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap jomi("Jomi");
	ScavTrap mike("Mike");
	FragTrap jim("Jim");
	jomi.printStats();
	mike.printStats();
	jim.printStats();
	jomi.takeDamage(10);
	jomi.printStats();
	mike.takeDamage(10);
	jim.attack("Jomi");
}