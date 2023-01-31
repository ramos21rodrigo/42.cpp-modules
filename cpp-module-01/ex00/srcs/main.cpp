#include "../includes/Zombie.hpp"

int main()
{
	string name;

	cout << "Zombie name: ";
	while(name.empty())
		getline(cin, name);

	cout << "\nCreating zombie on stack. And delete it when the function finish" << endl;
	randomChump(name);

	cout << "\nCreating zombie on heap." << endl;
	Zombie *zombie = newZombie(name);
	zombie->announce();
	cout << "Delete zombie on heap." << endl;
	delete zombie;

	return 0;
}