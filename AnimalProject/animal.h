#pragma once
#include "main.h"

class animal
{
public:

	string name;

	animal(string name) : name(name) {}

	virtual void getVoice()
	{
		cout << "........" << endl;
	}
};

