#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) {
	_name = "ClapTrap";
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << "ClapTrap " << this->_name << " is born !" << std::endl;
}

ClapTrap::ClapTrap(std::string name, unsigned int hitPoints, unsigned int energyPoints, unsigned int attackDamage){
	_name = name;
	_hitPoints = hitPoints;
	_energyPoints = energyPoints;
	_attackDamage = attackDamage;
	std::cout << "ClapTrap " << this->_name << " is born !" << std::endl;

}

ClapTrap::ClapTrap(std::string name) {
	_name = name;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << "ClapTrap " << this->_name << " is born !" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src) {
	_hitPoints = src._hitPoints;
	_energyPoints = src._energyPoints;
	_attackDamage = src._attackDamage;
	_name = src._name;
	std::cout << "ClapTrap " << this->_name << " is born as a clone (copy constructor) !" << std::endl;
}

ClapTrap & ClapTrap::operator=(const ClapTrap & rhs) {
	_hitPoints = rhs._hitPoints;
	_energyPoints = rhs._energyPoints;
	_attackDamage = rhs._attackDamage;
	_name = rhs._name;
	std::cout << "ClapTrap " << this->_name << " is born as a clone (assignment) !" << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap(void) {
	std::cout << "ClapTrap " << this->_name << " died !" << std::endl;
}

void ClapTrap::printStats(void) {
	std::cout << "	name: " << this->_name << std::endl;
	std::cout << "	Hit Points (Health): " << this->_hitPoints << std::endl;
	std::cout << "	Energy Points: " << this->_energyPoints << std::endl;
	std::cout << "	Attack Damage: " << this->_attackDamage << std::endl;
}

void ClapTrap::attack(std::string const & target)
{
	if (_energyPoints < 1)
	{
		std::cout << "ClapTrap " << _name << " is out of energy !" << std::endl;
		return ;
	}
	_energyPoints -= 1;
	std::cout << "ClapTrap " << _name << " attacks " << target << " causing " << _attackDamage << " points of damage !" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints - amount < 0)
		_hitPoints = 0;
	else
		_hitPoints -= amount;
	std::cout << _name << " takes " << amount << " points of damage !" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints < 1)
	{
		std::cout << "ClapTrap " << _name << " is out of energy !" << std::endl;
		return ;
	}
	_hitPoints += amount;
	std::cout << _name << " is repaired " << amount << " points of damage !" << std::endl;
}

