#pragma once
#include "main.h"

class Dog : public animal
{
public:

	Dog(string name) : animal(name) {}

	void getVoice() override
	{
		cout << "gaaaaaw...gaaaw.....";
	}
};

