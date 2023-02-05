#ifndef Brain_HPP
#define Brain_HPP

#include "main.hpp"

class Brain
{
private:
	string _ideas[100];

public:
	Brain();
	Brain(const Brain &copy);
	virtual ~Brain();

	Brain &operator=(const Brain &assign);
};

#endif