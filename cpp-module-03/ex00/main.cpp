#include "ClapTrap.hpp"

int main()
{
	ClapTrap jorge("Jorge");
	ClapTrap carlos("Carlos");

	for (size_t i = 0; i < 11; i++)
	{
		jorge.attack("o seu pai");
	}
	jorge.takeDamage(40000);
	cout << endl;

	for (size_t i = 0; i < 20; i++)
	{
		carlos.takeDamage(1);
		carlos.beRepaired(1);
	}

	return EXIT_SUCCESS;
}
