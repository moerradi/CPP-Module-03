#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("ScavTrap", 100, 50, 20) {
	std::cout << "ScavTrap " << _name << " is born !" << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20) {
	std::cout << "ScavTrap " << _name << " is born !" << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap(src) {
	std::cout << "ScavTrap " << _name << " is born as a clone (copy constructor)!" << std::endl;
	return ;
}

ScavTrap & ScavTrap::operator=(const ScavTrap & rhs) {
	_hitPoints = rhs._hitPoints;
	_energyPoints = rhs._energyPoints;
	_attackDamage = rhs._attackDamage;
	_name = rhs._name;
	std::cout << "ScavTrap " << _name << " is born as a clone (assingment) !" << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap " << _name << " died !" << std::endl;
	return ;
}

void	ScavTrap::attack(std::string const & target)
{
	if (_energyPoints < 1)
	{
		std::cout << "ScavTrap " << _name << " is out of energy !" << std::endl;
		return ;
	}
	_energyPoints -= 1;
	std::cout << "ScavTrap " << _name << " attacks " << target << " causing " << _attackDamage << " points of damage !" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << _name << " is now in Gate keeper mode." << std::endl;
}
