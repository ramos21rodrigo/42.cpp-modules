#include "../includes/phonebook.hpp"

int PhoneBook::_index = 0;

string getInput(string message)
{
    string input;

    while (input.empty())
    {
        cout << message;
        getline(cin, input);
    }
    return (input);
}

void displayTableField(string field)
{
    if (field.size() > 10)
        cout << std::setw(9) << std::right << field.substr(0, 9) << "." << '|';
    else
        cout << std::setw(10) << std::right << field << '|';
}

void PhoneBook::addContact()
{
    if (_index > 7)
    {
        for (int i = 0; i < 7; i++)
            _contacts[i] = _contacts[i + 1];
        _index -= 1;
    }
    _contacts[_index].setFirstName(getInput("First name: "));
    _contacts[_index].setLastName(getInput("Last name: "));
    _contacts[_index].setNickname(getInput("Nickname: "));
    _contacts[_index].setPhoneNumber(getInput("Phone number: "));
    _contacts[_index].setDarkestSecret(getInput("Darkest secret (other than beeing cute af 🥵): "));
    PhoneBook::_index += 1;
}

void PhoneBook::searchContact()
{
    string search_index;
    stringstream ss;
    int index;

    if (PhoneBook::_index == 0)
    {
        cout << "Add a contact first!" << endl;
        return;
    }

    cout << "|     Index| FirstName|  LastName|  Nickname|" << endl;
    for (int i = 0; i < PhoneBook::_index; i++)
    {
        cout << "|" << std::setw(10) << std::right << i << '|';
        displayTableField(_contacts[i].getFirstName());
        displayTableField(_contacts[i].getLastName());
        displayTableField(_contacts[i].getNickname());
        cout << endl;
    }

    while (true)
    {
        search_index = getInput("Index to open: ");
        if (search_index.size() != 1 || !std::isdigit(search_index[0]))
        {
            cout << "Wrong input." << endl;
            continue;
        }
        ss << search_index;
        ss >> index;
        ss.clear();
        break;
    }

    if (index < 0 || index > PhoneBook::_index - 1)
        cout << "Input out of boundaries." << endl;
    else
    {
        std::cout << "\nFirst Name: " << _contacts[index].getFirstName() << std::endl;
        std::cout << "Last Name: " << _contacts[index].getLastName() << std::endl;
        std::cout << "Nickname: " << _contacts[index].getNickname() << std::endl;
        std::cout << "Phone Number: " << _contacts[index].getPhoneNumber() << std::endl;
        std::cout << "Darkest Secret: " << _contacts[index].getDarkestSecret() << std::endl;
    }
}