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
	double getradius() const;

	void setXcenter() const;
	void setYcenter() const;
	void setradius() const;

	virtual void calcArea();
};

#endif
