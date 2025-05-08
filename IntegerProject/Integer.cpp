#include "Integer.h"

//Integer Integer::add(Integer integer)
//{
//
//}

Integer Integer::sub(Integer integer)
{
	return Integer(number - integer.number);
}

//Integer Integer::mul(Integer integer)
//{
//
//}
//
//Integer Integer::div(Integer integer)
//{
//
//}

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