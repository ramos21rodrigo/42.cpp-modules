#include "Harl.hpp"

int main(int argc, char *argv[])
{
	Harl harl;

	if (argc != 2)
	{
		cout << "[ Probably complaining about insignificant problems ]" << endl;
		return (0);
	}

	harl.complain(argv[1]);

	return 0;
}