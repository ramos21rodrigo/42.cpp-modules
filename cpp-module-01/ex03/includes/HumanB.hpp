#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
private:
	string _name;
	Weapon *_weapon;

public:
	void setWeapon(Weapon &weapon);
	void attack() const;
	HumanB(string name);
	~HumanB();
};

#endif