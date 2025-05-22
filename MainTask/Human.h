#pragma once
#include "main.h"
class Human
{

public:
	
	string name;
	int age;
	bool gender;

	Human();
	Human(string name, int age, bool gender);
	Human(const Human& human);
	~Human();

	int getAge();
	void setAge(int age);
	string getName();
	void setName(string name);
	bool isGender();
	void setGender(bool gender);
	string toString();
	
};

