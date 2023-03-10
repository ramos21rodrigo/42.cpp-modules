#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
private:
	ScavTrap();

public:
	void attack(const string &target);
	void guardGate();

	ScavTrap(string name);
	~ScavTrap();
};

#endif
