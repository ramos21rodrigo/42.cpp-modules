#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class ClapTrap
{
private:
	string _name;
	unsigned _hit_points;
	unsigned _energy_points;
	unsigned _attack_damage;

	bool haveEnergy()
	{
		return (_energy_points > 0);
	}

public:
	void attack(const string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	ClapTrap(string name);
	ClapTrap(const ClapTrap &copy);
	~ClapTrap();
	ClapTrap &operator=(const ClapTrap &assign);
};

#endif