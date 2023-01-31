#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::getline;
using std::endl;

class Zombie
{
	private:
		string	_name;

	public:
		void announce( void );
		Zombie(string name);
		~Zombie();
};

Zombie* newZombie( string name );
void randomChump( string name );

#endif