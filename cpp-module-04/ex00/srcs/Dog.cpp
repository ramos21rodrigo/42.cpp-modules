#include "../includes/Dog.hpp"

Dog::Dog() : Animal()
{
	_type = "Dog";
	cout << "\e[0;33mDefault Constructor called of Dog\e[0m" << endl;
}

Dog::Dog(const Dog &copy)
{
	*this = copy;
	cout << "\e[0;33mCopy Constructor called of Dog\e[0m" << endl;
}

Dog::~Dog()
{
	cout << "\e[0;31mDestructor called of Dog\e[0m" << endl;
}

Dog &Dog::operator=(const Dog &assign)
{
	_type = assign.getType();
	return *this;
}

string Dog::getType() const
{
	return _type;
}

void Dog::makeSound() const
{
	cout << "Woof woof" << endl;
}