#ifndef SCRAVTRAP_HPP
#define SCRAVTRAP_HPP

#include "main.hpp"

class ScavTrap : public ClapTrap
{
public:
	void attack(const string &target);
	void guardGate();

	ScavTrap(string name);
	~ScavTrap();
};

#endif
