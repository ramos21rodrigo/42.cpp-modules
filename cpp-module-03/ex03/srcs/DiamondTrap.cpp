#include "../includes/main.hpp"

DiamondTrap::DiamondTrap(string name) : ClapTrap(name), ScavTrap(name), FragTrap(name)
{
	_name = name;
	ClapTrap::_name = name + "_clap_name";

	FragTrap::_hit_points = 100;
	ScavTrap::_energy_points = 50;
	FragTrap::_attack_damage = 30;
	cout << "DiamondTrap: Default Constructor called" << endl;
}

DiamondTrap::~DiamondTrap()
{
	cout << "DiamondTrap: Destructor called" << endl;
}

void DiamondTrap::whoAmI()
{
	cout << "I am a DiamondTrap named " << _name << ", ClapTrap name: " << ClapTrap::_name << endl;
}
