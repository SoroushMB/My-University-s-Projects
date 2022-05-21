#include <iostream>
using namespace std;
#include "Rectangle.h"

int main()
{
	Rectangle r1;

	cout << "Length: "<< r1.GetLength() << endl;
    cout <<"Width: "<< r1.GetWidth() << endl;
	
	float a, c, t;
	a = r1.Area();
    c = r1.Circumference();
	cout << endl << "Area Of Your Desired Rectangle is: "<< c << endl <<"Circumference Of Your Desired Rectangle is: "<< a;
	return 0;
}