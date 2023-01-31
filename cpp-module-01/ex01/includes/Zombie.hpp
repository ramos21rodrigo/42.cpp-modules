#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>
#include <stdlib.h> 

using std::string;
using std::cout;
using std::endl;

class Zombie
{
	private:
		string	_name;
	public:
		void announce( int index );
		void setName( string name );
		Zombie();
		~Zombie();
};

Zombie* zombieHorde( int N, string name );

#endif