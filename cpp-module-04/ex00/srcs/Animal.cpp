#include "../includes/main.hpp"

Animal::Animal()
{
	_type = "";
	cout << "\e[0;33mDefault Constructor called of Animal\e[0m" << endl;
}

Animal::Animal(const Animal &copy)
{
	*this = copy;
	cout << "\e[0;33mCopy Constructor called of Animal\e[0m" << endl;
}

Animal::Animal(string type)
{
	_type = type;
	cout << "\e[0;33mFields Constructor called of Animal\e[0m" << endl;
}

Animal::~Animal()
{
	cout << "\e[0;31mDestructor called of Animal\e[0m" << endl;
}

Animal &Animal::operator=(const Animal &assign)
{
	_type = assign.getType();
	return *this;
}

string Animal::getType() const
{
	return _type;
}

void Animal::makeSound() const
{
	cout << "Animal makeSound called" << endl;
}
