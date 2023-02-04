#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "main.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	string _name;

public:
	void whoAmI();

	using ScavTrap::attack;
	DiamondTrap(string name);
	~DiamondTrap();
};

#endif
