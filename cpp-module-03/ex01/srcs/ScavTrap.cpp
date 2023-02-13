#include "../includes/ScavTrap.hpp"
#include "../includes/ClapTrap.hpp"

ScavTrap::ScavTrap(string name) : ClapTrap(name)
{
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;
	cout << "ScavTrap: Default Constructor called" << endl;
}

ScavTrap::~ScavTrap()
{
	cout << "ScavTrap: Destructor called" << endl;
}

void ScavTrap::attack(const string &target)
{
	if (!haveEnergy())
	{
		cout << "ScavTrap: " << _name << " is out of energy!" << endl;
		return;
	}
	cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << endl;
	_energy_points -= 1;
}

void ScavTrap::guardGate()
{
	cout << "ScavTrap: " << _name << " is now in Gate keeper mode." << endl;
}
