#include "../includes/main.hpp"

int main()
{
	DiamondTrap carlos("Carlos");

	// ClapTrap jorge("Jorge");
	// for (size_t i = 0; i < 11; i++)
	// {
	// 	jorge.attack("o seu pai");
	// }
	// jorge.takeDamage(40000);
	// cout << endl;

	// for (size_t i = 0; i < 20; i++)
	// {
	// 	carlos.takeDamage(1);
	// 	carlos.beRepaired(1);
	// }

	carlos.attack("the air");
	carlos.whoAmI();

	return EXIT_SUCCESS;
}
