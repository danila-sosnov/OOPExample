#include "Integer.h"

Integer Integer::sum(Integer right)
{
	return Integer(value + right.value);
}

Integer Integer::sub(Integer right)
{
	return Integer(value - right.value);
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

