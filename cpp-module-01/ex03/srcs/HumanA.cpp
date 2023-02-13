#include "../includes/HumanA.hpp"

HumanA::HumanA(string name, Weapon &weapon) : _name(name), _weapon(weapon) {}

HumanA::~HumanA() {}

void HumanA::attack() const
{
	if (_weapon.getType().empty())
	{
		cout << _name << " tried to attack without a weapon.... AHAHAHAHAHAHAHAH" << endl;
		return;
	}
	cout << _name << " attacks with their " << _weapon.getType() << endl;
}