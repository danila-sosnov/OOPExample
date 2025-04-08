#include <iostream>
#include <string>
using namespace std;

class Student {
public:
	//fields
	string name;
	int age;
	double mark;
	bool alive;

	//methods
	string getString()
	{
		string s = "Name: " + name;
		s += ", age: " + to_string(age)
			+ ", average mark: " + to_string(mark)
			+ ", alive: " + (alive ? "yes" : "no");

		return s;
	}
};

