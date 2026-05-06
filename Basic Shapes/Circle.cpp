#include "Circle.h"
#include <iostream>

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
	calcArea();
}
void Circle::calcArea()
{
	const double pi = 3.14159;
	setArea(pi * radius * radius);
}
void Circle::print() const
{
	cout << "Shape Name: " << getName() << endl;
	cout << "Shape Area: " << getArea() << endl;
	cout << "xCenter: " << getXcenter() << endl;
	cout << "yCenter: " << getYcenter() << endl;
	cout << "Radius: " << getRadius() << endl << endl;
}