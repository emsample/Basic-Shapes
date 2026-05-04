#ifndef CIRCLE_H
#define CIRCLE_H

#include "BasicShapes.h"

class Circle : public BasicShape
{
private:
	double xCenter;
	double yCenter;
	double radius;
public:
	Circle(double x, double y, double r, string n = "Circle");

	double getXcenter() const;
	double getYcenter() const;
	double getRadius() const;

	void setXcenter(double x);
	void setYcenter(double y);
	void setradius(double r);

	virtual void calcArea();
};

#endif
