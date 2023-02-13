#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>

using std::cout;
using std::endl;
using std::string;

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