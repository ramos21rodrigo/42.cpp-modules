#include "../includes/main.hpp"

Point::Point() : _x(0), _y(0) {}

Point::Point(const float x, const float y) : _x(x), _y(y) {}

Point::Point(const Point &copy) : _x(copy._x), _y(copy._y) {}

Point::~Point() {}

Point &Point::operator=(const Point &assign)
{

	if (this != &assign)
	{
		(Fixed) _x = assign.getX();
		(Fixed) _y = assign.getY();
	}
	return *this;
}

Fixed Point::getX(void) const
{
	return _x;
}
Fixed Point::getY(void) const
{
	return _y;
}
