#include "Integer.h"

Integer Integer::add(Integer integer)
{
	return Integer(number + integer.number);
}

Integer Integer::sub(Integer integer)
{
	return Integer(number - integer.number);
}

Integer Integer::mul(Integer integer)
{
	return Integer(number * integer.number);
}

Integer Integer::div(Integer integer)
{
	return Integer(number / integer.number);
}

Integer::Integer(int number)
{
	this->number = number;
}

int Integer::getNumber()
{
	return number;
}

void Integer::setNumber(int number)
{
	this->number = number;
}