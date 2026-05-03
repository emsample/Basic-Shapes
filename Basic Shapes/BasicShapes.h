#ifndef BASICSHAPE_H
#define BASICSHAPE_H

#include <string>
using namespace std;

class BasicShape
{
	private:
		double area;
		string name;

	public:
		BasicShape();

		double getArea() const;
		string getName() const;

		void setArea(double a);
		void setName(string n);

		virtual void calcArea() = 0;

		virtual ~BasicShape();
};

#endif
