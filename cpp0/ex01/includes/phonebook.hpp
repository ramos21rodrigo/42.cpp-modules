#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

class PhoneBook
{
private:
	Contact m_contacts[8];
	static int		m_index;
public:
	void addContact();
	void searchContact();
};

#endif