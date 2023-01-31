#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "main.hpp"

class HumanA
{
private:
	string _name;
	Weapon &_weapon;

public:
	void attack() const;
	HumanA(string name, Weapon &weapon);
	~HumanA();
};

#endif