#ifndef WEAPON_HPP
#define WEAPON_HPP

#include "main.hpp"

class Weapon
{
private:
	string _type;

public:
	Weapon(string type);
	Weapon();
	const string &getType() { return _type; }
	void setType(string type);
};

#endif