#include "../includes/main.hpp"

ClapTrap::ClapTrap(string name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	cout << "Default Constructor called" << endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	*this = copy;
	cout << "Copy Constructor called of ClapTrap" << endl;
}

ClapTrap::~ClapTrap()
{
	cout << "Destructor called" << endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &assign)
{
	this->_name = assign._name;
	this->_hit_points = assign._hit_points;
	this->_energy_points = assign._energy_points;
	this->_attack_damage = assign._attack_damage;
	return *this;
}

void ClapTrap::attack(const string &target)
{
	if (!haveEnergy())
	{
		cout << "ClapTrap " << _name << " is out of energy!" << endl;
		return;
	}
	cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << endl;
	_energy_points -= 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hit_points <= amount)
	{
		cout << "ClapTrap " << _name << " is dead!" << endl;
		return;
	}
	_hit_points -= amount;
	cout << "ClatTrap " << _name << " take damage for " << amount << " hit points" << endl;
	cout << "Current health: " << _hit_points << endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (!haveEnergy())
	{
		cout << "ClapTrap " << _name << " is out of energy!" << endl;
		return;
	}
	_hit_points += amount;
	cout << "ClatTrap " << _name << " repairs itself for " << amount << " hit points" << endl;
	cout << "Current health: " << _hit_points << endl;
	_energy_points -= 1;
}
