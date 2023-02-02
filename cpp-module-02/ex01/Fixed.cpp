#include "Fixed.hpp"

// Constructors
Fixed::Fixed()
{
	cout << "Default constructor called" << endl;
	_fixed_point_value = 0;
}

Fixed::Fixed(const int num)
{
	cout << "Int constructor called" << endl;
	_fixed_point_value = num << _fractional_bits;
}

Fixed::Fixed(const float num)
{
	cout << "Float constructor called" << endl;
	_fixed_point_value = std::roundf(num * (1 << _fractional_bits));
}

Fixed::Fixed(const Fixed &copy)
{
	cout << "Copy constructor called" << endl;
	*this = copy;
}

Fixed::~Fixed()
{
	cout << "Destructor called" << endl;
}

Fixed &Fixed::operator=(const Fixed &assign)
{
	cout << "Copy assignment operator called" << endl;
	if (this != &assign)
		_fixed_point_value = assign.getRawBits();
	return *this;
}

int Fixed::getRawBits() const
{
	return _fixed_point_value;
}

void Fixed::setRawBits(int const raw)
{
	_fixed_point_value = raw;
}

float Fixed::toFloat(void) const
{
	return static_cast<float>(this->getRawBits()) / (1 << _fractional_bits);
}

int Fixed::toInt(void) const
{
	return _fixed_point_value >> _fractional_bits;
}

std::ostream &operator<<(std::ostream &o, Fixed const &i)
{
	return o << i.toFloat();
}

std::ostream &operator<<(std::ostream &o, Fixed const &i)
{
	return o << i.toFloat();
}
