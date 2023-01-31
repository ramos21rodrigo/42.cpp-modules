#include "../includes/Zombie.hpp"

Zombie::Zombie(){}

void Zombie::setName( string name )
{
	_name = name;
}

Zombie::~Zombie()
{
	cout << "Zombie went mimir." << endl;
}

void Zombie::announce(int index)
{
	cout << index + 1 << ". " << _name << ": BraiiiiiiinnnzzzZ..." << endl;
}