#include "../includes/main.hpp"

FragTrap::FragTrap(string name) : ClapTrap(name)
{
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
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
