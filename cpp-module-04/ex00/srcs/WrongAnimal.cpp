#include "../includes/main.hpp"

WrongAnimal::WrongAnimal()
{
	_type = "";
	cout << "\e[0;33mDefault Constructor called of WrongAnimal\e[0m" << endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	*this = copy;
	cout << "\e[0;33mCopy Constructor called of WrongAnimal\e[0m" << endl;
}

WrongAnimal::WrongAnimal(string type)
{
	_type = type;
	cout << "\e[0;33mFields Constructor called of WrongAnimal\e[0m" << endl;
}

WrongAnimal::~WrongAnimal()
{
	cout << "\e[0;31mDestructor called of WrongAnimal\e[0m" << endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &assign)
{
	_type = assign.getType();
	return *this;
}

string WrongAnimal::getType() const
{
	return _type;
}

void WrongAnimal::makeSound() const
{
	cout << "WrongAnimal makeSound called" << endl;
}
