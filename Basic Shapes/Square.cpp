#include "Square.h"
#include <iostream>

Square::Square(double s, string n) : Rectangle(s, s, n)
{
	side = s;
	setName(n);
}
double Square::getSide() const
{
	return side;
}
void Square::setSide(double s)
{
	side = s;

	setLength(s);
	setWidth(s);			//triggers correct area calc since setWidth calls calcAreaw
}
void Square::print() const
{
	cout << "Shape Name: " << getName() << endl;
	cout << "Shape Area: " << getArea() << endl;
	cout << "Side: " << getSide() << endl;
}