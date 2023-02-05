#include "../includes/main.hpp"

WrongCat::WrongCat()
{
	_type = "";
	cout << "\e[0;33mDefault Constructor called of WrongCat\e[0m" << endl;
}

WrongCat::WrongCat(const WrongCat &copy)
{
	*this = copy;
	cout << "\e[0;33mCopy Constructor called of WrongCat\e[0m" << endl;
}

WrongCat::WrongCat(string type)
{
	_type = type;
	cout << "\e[0;33mFields Constructor called of WrongCat\e[0m" << endl;
}

WrongCat::~WrongCat()
{
	cout << "\e[0;31mDestructor called of WrongCat\e[0m" << endl;
}

WrongCat &WrongCat::operator=(const WrongCat &assign)
{
	_type = assign.getType();
	return *this;
}

string WrongCat::getType() const
{
	return _type;
}