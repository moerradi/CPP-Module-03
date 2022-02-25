#ifndef __SCAVTRAP_HPP__
#define __SCAVTRAP_HPP__
#include "ClapTrap.hpp"

class ScavTrap: public virtual ClapTrap {
	public :
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & src);
		ScavTrap & operator=(const ScavTrap & rhs);
		~ScavTrap(void);
		void attack(std::string const & target);
		void guardGate(void);
};

#endif