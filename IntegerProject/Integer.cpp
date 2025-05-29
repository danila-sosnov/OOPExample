#include "Integer.h"

Integer Integer::sum(Integer right)
{
	return Integer(value + right.value);
}

Integer Integer::sum(Integer i1, Integer i2)
{
	return Integer(value + i1.value + i2.value);
}
Integer Integer::sub(Integer right)
{
	return Integer(value - right.value);
}

Integer Integer::mul(int value)
{
	return Integer(this->value * value);
}

Integer Integer::mul(double value)
{
	return Integer((int)(this->value * value));
}


Integer Integer::mul(Integer right)
{
	return Integer(value * right.value);
}

Integer Integer::div(Integer right)
{
	return Integer(value / right.value);
}

Integer Integer::mod(Integer right)
{
	return Integer(value % right.value);
}

Integer Integer::operator+(Integer right)
{
	return sum(right);
}
Integer Integer::operator+(int value)
{
	return sum(value);
}
Integer Integer::operator-(Integer right)
{
	return sub(right);
}
Integer Integer::operator*(Integer right)
{
	return mul(right);
}
Integer Integer::operator/(Integer right)
{
	return div(right);
}
Integer Integer::operator%(Integer right)
{
	return mod(right);
}