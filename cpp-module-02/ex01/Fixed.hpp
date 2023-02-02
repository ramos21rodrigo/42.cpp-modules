#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

using std::cout;
using std::endl;

class Fixed
{
private:
	int _fixed_point_value;
	static const int _fractional_bits = 8;

public:
	int getRawBits(void) const;
	void setRawBits(int const raw);

	float toFloat(void) const;
	int toInt(void) const;

	Fixed();
	Fixed(const int num);
	Fixed(const float num);
	Fixed(const Fixed &copy);
	~Fixed();

	Fixed &operator=(const Fixed &assign);
};

std::ostream &operator<<(std::ostream &o, Fixed const &i);

#endif