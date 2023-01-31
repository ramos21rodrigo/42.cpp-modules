#ifndef HARL_HPP
#define HARL_HPP

#include <string>
#include <iostream>

using std::cout;
using std::endl;
using std::string;

class Harl
{
private:
	typedef void (Harl::*t_complains)(void);
	t_complains _complains[4];

	void debug(void);
	void info(void);
	void warning(void);
	void error(void);

public:
	void complain(string level);

	Harl();
};

#endif