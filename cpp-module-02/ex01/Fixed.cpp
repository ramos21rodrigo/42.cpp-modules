#include "Fixed.hpp"

// Constructors
Fixed::Fixed()
{
	cout << "Default constructor called" << endl;
	_fixed_point_value = 0;
}

Fixed::Fixed(const Fixed &copy)
{
	cout << "Copy constructor called" << endl;
	*this = copy;
}

// Destructor
Fixed::~Fixed()
{
	cout << "Destructor called" << endl;
}

// Operators
Fixed &Fixed::operator=(const Fixed &assign)
{
	cout << "Copy assignment operator called" << endl;
	if (this != &assign)
		_fixed_point_value = assign.getRawBits();
	return *this;
}

int Fixed::getRawBits() const
{
	cout << "getRawBits member function called" << endl;
	return _fixed_point_value;
}

void Fixed::setRawBits(int const raw)
{
	cout << "setRawBits member function called" << endl;
	_fixed_point_value = raw;
}