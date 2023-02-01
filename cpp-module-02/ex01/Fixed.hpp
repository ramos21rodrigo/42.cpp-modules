#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

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

	Fixed();
	Fixed(const Fixed &copy);
	~Fixed();
	Fixed &operator=(const Fixed &assign);
};

#endif