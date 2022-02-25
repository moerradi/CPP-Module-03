#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) {
	_name = "DiamondTrap";
	_name = "DiamondTrap_clap_name";
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 30;
	std::cout << "DiamondTrap " << this->_name << " is born !" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) {
	_name = name;
	ClapTrap::_name = name + "_clap_name";
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 30;
	std::cout << "DiamondTrap " << this->_name << " is born !" << std::endl;
}


DiamondTrap::DiamondTrap(DiamondTrap const & src) {
	*this = src;
	std::cout << "DiamondTrap " << this->_name << " is born !" << std::endl;
}

DiamondTrap::~DiamondTrap(void) {
	std::cout << "DiamondTrap " << this->_name << " died !" << std::endl;
}

DiamondTrap &	DiamondTrap::operator=(DiamondTrap const & rhs) {
	_name = rhs._name;
	ClapTrap::_name = rhs.ClapTrap::_name;
	_hitPoints = rhs._hitPoints;
	_energyPoints = rhs._energyPoints;
	_attackDamage = rhs._attackDamage;
	return *this;
}

void	DiamondTrap::whoAmI(void) {
	std::cout << "Initiating Identity Crisis..." << std::endl;
	std::cout << "I am a DiamondTrap named " << _name << " but sometimes I think my name is " << ClapTrap::_name << "." << std::endl;
}

void	DiamondTrap::attack(const std::string &target) {
	ScavTrap::attack(target);
}