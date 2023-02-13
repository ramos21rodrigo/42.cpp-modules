#include "../includes/FragTrap.hpp"

FragTrap::FragTrap(string name) : ClapTrap(name)
{
	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;
	cout << "FragTrap: Default Constructor called" << endl;
}

FragTrap::~FragTrap()
{
	cout << "FragTrap: Destructor called" << endl;
}

void FragTrap::highFivesGuys()
{
	cout << "FragTrap " << _name << " high fives everybody 🙏 (yes, this is a high five)." << endl;
}
