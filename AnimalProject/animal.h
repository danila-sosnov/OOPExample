#pragma once
#include "main.h"

class animal
{

private:

	static int count;
	static const int MAX = 10;

public:

	string name;
	
	animal()
	{
		count++;
	}
	animal(string name) : name(name) {}

	~animal()
	{
		count--;
	}

	static int getCount();
	
	string toString();

	
};

