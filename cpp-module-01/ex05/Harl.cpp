#include "Harl.hpp"

Harl::Harl()
{
	_complains[0] = &Harl::debug;
	_complains[1] = &Harl::info;
	_complains[2] = &Harl::warning;
	_complains[3] = &Harl::error;
}

void Harl::debug()
{
	cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << endl;
}

void Harl::info()
{
	cout << "I cannot believe adding extra bacon costs more money. You didn't putenough bacon in my burger! If you did, I wouldn't be asking for more!" << endl;
}

void Harl::warning()
{
	cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << endl;
}

void Harl::error()
{
	cout << "This is unacceptable! I want to speak to the manager now." << endl;
}

void Harl::complain(string level)
{
	string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;

	while (i < 4 && levels[i].compare(level))
		i++;
	if (i < 4)
		(this->*_complains[i])();
}