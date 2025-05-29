#pragma once
#include <iostream>
#include <string>
using namespace std;


class Point2D
{

private:
	int x;
	int y;

	double length();
	

	
public:

	Point2D() : x(0), y() {}
	Point2D(int x, int y) : x(x), y(y) {}
	
	int getX() { return x; }
	void setX() { this->x = x; }
	int getY() { return y; }
	void setY() { this->y = y; }

	bool operator==(Point2D point);
	bool operator!=(Point2D point);
	bool operator>(Point2D point);
	bool operator<(Point2D point);
	bool operator>=(Point2D point);
	bool operator<=(Point2D point);

	Point2D operator+(int value);
	Point2D operator-(int value);
	Point2D operator*(int value);
	Point2D operator/(int value);

	Point2D operator-();
	Point2D operator++(); //++point
	Point2D operator++(int); //point++
	Point2D operator--();

	string toString();
};