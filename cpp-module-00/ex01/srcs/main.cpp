#include "../includes/phonebook.hpp"

int main()
{
	string option;
	PhoneBook phonebook;

	while (true)
	{
		cout << "\nPhonebook option:\n➔ADD\n➔SEARCH\n➔EXIT\n"
			 << endl;

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
