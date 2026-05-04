#include "Square.h"

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
	setWidth(s);
}