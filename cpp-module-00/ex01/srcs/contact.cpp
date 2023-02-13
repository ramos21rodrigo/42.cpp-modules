#include "../includes/contact.hpp"

void Contact::setFirstName(string first_name)
{
	_first_name = first_name;
}
void Contact::setLastName(string last_name)
{
	_last_name = last_name;
}
void Contact::setNickname(string nickname)
{
	_nickname = nickname;
}
void Contact::setPhoneNumber(string phone_number)
{
	_phone_number = phone_number;
}

void Contact::setDarkestSecret(string darkest_secret)
{
	_darkest_secret = darkest_secret;
}

string Contact::getFirstName()
{
	return _first_name;
}

string Contact::getLastName()
{
	return _last_name;
}

string Contact::getNickname()
{
	return _nickname;
}

string Contact::getPhoneNumber()
{
	return _phone_number;
}

string Contact::getDarkestSecret()
{
	return _darkest_secret;
}
