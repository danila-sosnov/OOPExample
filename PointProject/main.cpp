#include "Point2D.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{

	Point2D point1(1, 1), point2(2, 2);

	cout << point1.toString() << " > " << point2.toString()
		<< " --> " << (point1 > point2 ? "yes" : "no") << endl;

	cout << point1.toString() << " < " << point2.toString()
		<< " --> " << (point1 < point2 ? "yes" : "no") << endl;

	cout << point1.toString() << " == " << point2.toString()
		<< " --> " << (point1 == point2 ? "yes" : "no") << endl;

	cout << point1.toString() << " != " << point2.toString()
		<< " --> " << (point1 != point2 ? "yes" : "no") << endl;

	cout << point1.toString() << " != " << point2.toString()
		<< " --> " << (point1 != point2 ? "yes" : "no") << endl;

	cout << point1.toString() << " >= " << point2.toString()
		<< " --> " << (point1 >= point2 ? "yes" : "no") << endl;

	cout << point1.toString() << " <= " << point2.toString()
		<< " --> " << (point1 <= point2 ? "yes" : "no") << endl;

	return 0;
}