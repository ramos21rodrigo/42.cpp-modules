#include "../includes/main.hpp"

int PhoneBook::m_index = 0;

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
    if (m_index > 7)
    {
        for (int i = 0; i < 7; i++)
            m_contacts[i] = m_contacts[i + 1];
        m_index -= 1;
    }
    m_contacts[m_index].setFirstName(getInput("First name: "));
    m_contacts[m_index].setLastName(getInput("Last name: "));
    m_contacts[m_index].setNickname(getInput("Nickname: "));
    m_contacts[m_index].setPhoneNumber(getInput("Phone number: "));
    m_contacts[m_index].setDarkestSecret(getInput("Darkest secret (other than beeing cute af 🥵): "));
    PhoneBook::m_index += 1;
}

void PhoneBook::searchContact()
{
    string search_index;
    stringstream ss;
    int index;

    if (PhoneBook::m_index == 0)
    {
        cout << "Add a contact first!" << endl;
        return;
    }

    cout << "|     Index| FirstName|  LastName|  Nickname|" << endl;
    for (int i = 0; i < PhoneBook::m_index; i++)
    {
        cout << "|" << std::setw(10) << std::right << i << '|';
        displayTableField(m_contacts[i].getFirstName());
        displayTableField(m_contacts[i].getLastName());
        displayTableField(m_contacts[i].getNickname());
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

    if (index < 0 || index > PhoneBook::m_index - 1)
        cout << "Input out of boundaries." << endl;
    else
    {
        std::cout << "\nFirst Name: " << m_contacts[index].getFirstName() << std::endl;
        std::cout << "Last Name: " << m_contacts[index].getLastName() << std::endl;
        std::cout << "Nickname: " << m_contacts[index].getNickname() << std::endl;
        std::cout << "Phone Number: " << m_contacts[index].getPhoneNumber() << std::endl;
        std::cout << "Darkest Secret: " << m_contacts[index].getDarkestSecret() << std::endl;
    }
}