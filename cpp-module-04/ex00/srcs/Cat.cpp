#include "../includes/Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	cout << "\e[0;33mDefault Constructor called of Cat\e[0m" << endl;
}

Cat::Cat(const Cat &copy)
{
	*this = copy;
	cout << "\e[0;33mCopy Constructor called of Cat\e[0m" << endl;
}

Cat::~Cat()
{
	cout << "\e[0;31mDestructor called of Cat\e[0m" << endl;
}

Cat &Cat::operator=(const Cat &assign)
{
	_type = assign.getType();
	return *this;
}

string Cat::getType() const
{
	return _type;
}

void Cat::makeSound() const
{
	cout << "Miau" << endl;
}