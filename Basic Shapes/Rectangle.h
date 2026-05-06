#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "BasicShapes.h"

class Rectangle : public BasicShape
{
private:

	double length;
	double width;

public:

	Rectangle(double l, double w, string n = "Circle");

	double getLength() const;
	double getWidth() const;

	void setLength(double l);
	void setWidth(double w);

	virtual void calcArea();
	virtual void print() const;
};
#endif // !RECTANGLE_H
