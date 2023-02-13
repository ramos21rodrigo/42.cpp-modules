#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
private:
	const Fixed _x;
	const Fixed _y;

public:
	Fixed getX(void) const;
	Fixed getY(void) const;

	Point();
	Point(float x, float y);
	Point(const Point &copy);
	~Point();
	Point &operator=(const Point &assign);
};

bool bsp(Point a, Point b, Point c, Point point);

#endif