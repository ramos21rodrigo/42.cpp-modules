#include "../includes/HumanB.hpp"

HumanB::HumanB(string name) : _name(name)
{
	_weapon = NULL;
}

HumanB::~HumanB()
{
}

void HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}

void HumanB::attack() const
{
	if (!_weapon || _weapon->getType().empty())
	{
		cout << _name << " tried to attack without a weapon.... AHAHAHAHAHAHAHAH" << endl;
		return;
	}
	cout << _name << " attacks with their " << _weapon->getType() << endl;
}