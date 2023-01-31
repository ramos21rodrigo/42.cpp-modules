#include "Harl.hpp"

int main()
{
	string input;
	Harl harl;

	do
	{
		cout << "\nLevels: DEBUG | INFO | WARNING | ERROR\n> ";
		getline(cin, input);
		harl.complain(input);
	} while (!input.empty());

	return EXIT_SUCCESS;
}
