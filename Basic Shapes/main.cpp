#include <iostream>
#include <iomanip>
#include "BasicShapes.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"

using namespace std;

static void printShape(BasicShape* shape)
{
    cout << "Shape Name: " << shape->getName() << endl;
    cout << "Shape Area: " << shape->getArea() << endl;
    cout << endl;
}
int main()
{
    cout << fixed << setprecision(2);
    cout << "TESTING OUTPUTS OF EACH CLASS" << endl;
    cout << "-----------------------------" << endl;

    Rectangle rect1(5, 10, "Rectangle 1");
    Rectangle rect2(3, 7, "Rectangle 2");

    Circle circle1(0, 0, 4, "Circle 1");
    Circle circle2(2, 3, 6, "Circle 2");

    Square square1(5, "Square 1");

    BasicShape* shapes[5];

    shapes[0] = &rect1;
    shapes[1] = &rect2;
    shapes[2] = &circle1;
    shapes[3] = &circle2;
    shapes[4] = &square1;

    cout << "INITIAL POLYMORPHISM TESTS" << endl;
    cout << "--------------------------" << endl;

    for (int i = 0; i < 5; i++)
    {
        shapes[i]->calcArea();
        printShape(shapes[i]);
    }

    cout << "CIRCLE SETTER AND GETTER TESTS" << endl;
    cout << "------------------------------" << endl;

    cout << "Before radius change:" << endl;
    printShape(&circle1);

    circle1.setradius(10);

    cout << "After setRadius(10)" << endl;
    cout << "Expected area: 314.16" << endl;
    cout << "Actual area:   " << circle1.getArea() << endl;
    cout << endl;

    circle1.setXcenter(5);
    circle1.setYcenter(8);

    cout << "After setXCenter(5) and setYCenter(8)" << endl;
    cout << "Expected area should stay the same: 314.16" << endl;
    cout << "Actual area:                         " << circle1.getArea() << endl;
    cout << endl;

    cout << "RECTANGLE SETTER AND GETTER TESTS" << endl;
    cout << "---------------------------------" << endl;

    cout << "Before length and width changes:" << endl;
    printShape(&rect1);

    rect1.setLength(8);

    cout << "After setLength(8)" << endl;
    cout << "Expected area: 80.00" << endl;
    cout << "Actual area:   " << rect1.getArea() << endl;
    cout << endl;

    rect1.setWidth(4);

    cout << "After setWidth(4)" << endl;
    cout << "Expected area: 32.00" << endl;
    cout << "Actual area:   " << rect1.getArea() << endl;
    cout << endl;

    cout << "SQUARE SETTER AND GETTER TESTS" << endl;
    cout << "------------------------------" << endl;

    cout << "Before side change:" << endl;
    printShape(&square1);

    square1.setSide(9);

    cout << "After setSide(9)" << endl;
    cout << "Expected length: 9.00" << endl;
    cout << "Actual length:   " << square1.getLength() << endl;
    cout << "Expected width:  9.00" << endl;
    cout << "Actual width:    " << square1.getWidth() << endl;
    cout << "Expected area:   81.00" << endl;
    cout << "Actual area:     " << square1.getArea() << endl;
    cout << endl;

    cout << "FINAL POLYMORPHISM TEST" << endl;
    cout << "-----------------------" << endl;

    for (int i = 0; i < 5; i++)
    {
        printShape(shapes[i]);
    }

    return 0;
}
