#include "../includes/Zombie.hpp"

Zombie::Zombie(string name)
{
	_name = name;
}

Zombie::~Zombie()
{
	cout << "Zombie went mimir." << endl;
}

void Zombie::announce()
{
	cout << _name << ": BraiiiiiiinnnzzzZ..." << endl;
}