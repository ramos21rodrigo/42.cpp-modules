#ifndef CONTANT_HPP
#define CONTANT_HPP

#include "main.hpp"

class Contact
{
	private:
        string m_first_name;
        string m_last_name;
        string m_nickname;
        string m_phone_number;
        string m_darkest_secret;

	public:		
		void setFirstName(string str);
		void setLastName(string str);
		void setNickname(string str);
		void setPhoneNumber(string str);
		void setDarkestSecret(string str);

		string getFirstName() { return(m_first_name); }
		string getLastName() { return(m_last_name); }
		string getNickname() { return(m_nickname); }
		string getPhoneNumber() { return(m_phone_number); }
		string getDarkestSecret() { return(m_darkest_secret); }
};

#endif