#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
private:
	FragTrap();

public:
	void highFivesGuys();

	FragTrap(string name);
	~FragTrap();
};

#endif
