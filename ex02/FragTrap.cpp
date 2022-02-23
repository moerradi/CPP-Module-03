#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap("FragTrap", 100, 100, 30) {
	std::cout << "FragTrap " << this->_name << " is born !" << std::endl;
	return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30) {
	std::cout << "FragTrap " << this->_name << " is born !" << std::endl;
	return ;
}

FragTrap::FragTrap(const FragTrap & src) : ClapTrap(src) {
	std::cout << "FragTrap " << this->_name << " is born as a clone (copy constructor)!" << std::endl;
	return ;
}

FragTrap &FragTrap::operator=(const FragTrap & rhs) {
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	this->_name = rhs._name;
	return (*this);
}

FragTrap::~FragTrap(void) {
	std::cout << "FragTrap " << this->_name << " died !" << std::endl;
	return ;
}

void	FragTrap::attack(std::string const & target)
{
	if (this->_energyPoints < 1)
	{
		std::cout << "FragTrap " << this->_name << " is out of energy !" << std::endl;
		return ;
	}
	this->_energyPoints -= 1;
	std::cout << "FragTrap " << this->_name << " attacks " << target << " causing " << this->_attackDamage << " points of damage !" << std::endl;
}

void	FragTrap::highFiveGuys(void)
{
	std::cout << this->_name << " : gimme five homie !" << std::endl;
}