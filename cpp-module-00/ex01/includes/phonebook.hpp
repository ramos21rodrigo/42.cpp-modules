#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"

#include <sstream>
#include <iostream>
#include <iomanip>
#include <ctype.h>

using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::stringstream;

class PhoneBook
{
private:
	Contact _contacts[8];
	static int _index;

public:
	void addContact();
	void searchContact();
};

#endif