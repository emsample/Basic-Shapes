#include <iostream>
#include <iomanip>
#include "BasicShapes.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"

using namespace std;

void printShape(BasicShape* shape)
{
    cout << "Shape Name: " << shape->getName() << endl;
    cout << "Shape Area: " << shape->getArea() << endl;
    cout << endl;
}