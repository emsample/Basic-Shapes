#include "BasicShapes.h"

BasicShape::BasicShape()
{
	area = 0.0;
	name = " ";
}
double BasicShape::getArea() const
{
	return area;
}
string BasicShape::getName() const
{
	return name;
}
void BasicShape::setArea(double a)
{
	area = a;
}
void BasicShape::setName(string n)
{
	name = n;
}
BasicShape::~BasicShape()
{ }