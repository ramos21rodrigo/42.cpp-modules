#include "../includes/main.hpp"

int main()
{
	string option;
	PhoneBook phonebook;

	while (true)
	{
		cout << "Option: ";
		getline(cin, option);
		if (option == "ADD")
		{
			phonebook.addContact();
			continue;
		}
		if (option == "SEARCH")
		{
			phonebook.searchContact();
			continue;
		}
		if (option == "EXIT")
			break;
		cout << "Invalid command" << endl;
	}
	return 0;
}
