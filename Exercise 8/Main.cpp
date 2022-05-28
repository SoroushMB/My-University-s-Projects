#include <iostream>
#include "Circle.h"
using namespace std;
int main()
{
    float r;
    cout << "Please Enter Radius: " , cin >> r;
    Circle c1(r);
    cout << "Area: " << c1.getArea() << endl;cout << "Circumference: " << c1.getCircumference() << endl;
}