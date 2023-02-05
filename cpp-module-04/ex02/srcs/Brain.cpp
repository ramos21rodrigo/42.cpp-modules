#include "../includes/main.hpp"

Brain::Brain()
{
	cout << "\e[0;33mDefault Constructor called of Brain\e[0m" << endl;
}

Brain::Brain(const Brain &copy)
{
	*this = copy;
	cout << "\e[0;33mCopy Constructor called of Brain\e[0m" << endl;
}

Brain::~Brain()
{
	cout << "\e[0;31mDestructor called of Brain\e[0m" << endl;
}

Brain &Brain::operator=(const Brain &assign)
{
	for (size_t i = 0; i < 100; i++)
		_ideas[i] = assign._ideas[i];
	return *this;
}