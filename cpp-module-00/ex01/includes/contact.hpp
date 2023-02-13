#ifndef CONTANT_HPP
#define CONTANT_HPP

#include <string>

using std::string;

class Contact
{
private:
	string _first_name;
	string _last_name;
	string _nickname;
	string _phone_number;
	string _darkest_secret;

public:
	void setFirstName(string str);
	void setLastName(string str);
	void setNickname(string str);
	void setPhoneNumber(string str);
	void setDarkestSecret(string str);

	string getFirstName();
	string getLastName();
	string getNickname();
	string getPhoneNumber();
	string getDarkestSecret();
};

#endif