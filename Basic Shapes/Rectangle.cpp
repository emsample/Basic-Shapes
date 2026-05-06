#include "Rectangle.h"

Rectangle::Rectangle(double l, double w, string n)
{
	length = l;
	width = w;

	setName(n);
	calcArea();
}
double Rectangle::getLength() const
{
	return length;
}
double Rectangle::getWidth() const
{
	return width;
}
void Rectangle::setLength(double l)
{
	length = l;
	calcArea();
}
void Rectangle::setWidth(double w)
{
	width = w;
	calcArea();
}
void Rectangle::calcArea()
{
	setArea(length * width);
}