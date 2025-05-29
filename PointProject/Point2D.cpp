#include "Point2D.h"

string Point2D::toString()
{
	return "x = " + to_string(x)
		+ ", y = " + to_string(y);
}
bool Point2D::operator==(Point2D point)
{
	return x == point.x && y == point.y;
}
bool  Point2D::operator!=(Point2D point)
{
	return !(*this == point);
	//return x != point.x || y != point.y;
}
bool  Point2D::operator>(Point2D point)
{
	return length() > point.length();
}
bool  Point2D::operator<(Point2D point)
{
	return length() < point.length();
}
bool  Point2D::operator>=(Point2D point)
{
	return !(*this < point);
}
bool  Point2D::operator<=(Point2D point)
{
	return !(*this > point);
}

double Point2D::length()
{
	return sqrt(x * x + y * y);
}

Point2D Point2D::operator+(int value)
{
	return Point2D(x + value, y + value);
}
Point2D Point2D::operator-(int value)
{
	return Point2D(x - value, y - value);
}
Point2D Point2D::operator*(int value)
{
	return Point2D(x * value, y * value);
}
Point2D Point2D::operator/(int value)
{
	return Point2D(x / value, y / value);
}

Point2D Point2D::operator-()
{
	return Point2D(-x, -y);
}
Point2D Point2D::operator++()
{
	++x;
	++y;

	return Point2D(x, y);
}

Point2D Point2D::operator++(int)
{
	Point2D point(x, y);
	++x;
	++y;
	return point;
}
Point2D Point2D::operator--()
{

}
