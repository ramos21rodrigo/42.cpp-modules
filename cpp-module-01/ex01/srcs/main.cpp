#include "../includes/Zombie.hpp"

#define N 10
#define NAME "Carlos"

int main()
{
	Zombie *zombies = zombieHorde(N, NAME);

	for (int i = 0; i < N; i++)
        zombies[i].announce( i );

	delete [] zombies;
	return 0;
}