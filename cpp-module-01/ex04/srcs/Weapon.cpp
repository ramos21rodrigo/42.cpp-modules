#include "../includes/main.hpp"

Weapon::Weapon(string type)
{
	_type = type;
}

Weapon::Weapon() {}

void Weapon::setType(string type)
{
	_type = type;
}
