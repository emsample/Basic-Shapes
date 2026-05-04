#include "Circle.h"

Circle::Circle(double x, double y, double r, string n)
{
	xCenter = x;
	yCenter = y;
	radius = r;

	setName(n);
	calcArea();
}
double Circle::getXcenter() const
{
	return xCenter;
}
double Circle::getYcenter() const
{
	return yCenter;
}
double Circle::getRadius() const
{
	return radius;
}
void Circle::setXcenter(double x)
{
	xCenter = x;
}
void Circle::setYcenter(double y)
{
	yCenter = y;
}
void Circle::setradius(double r)
{
	radius = r;
}
void Circle::calcArea()
{
	const double pi = 3.14159;
	setArea(pi * radius * radius);
}