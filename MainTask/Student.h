#include <iostream>
#include <string>
using namespace std;

class Student {
public:
	// fields
	string name;
	int age;
	double mark;
	bool alive;

	// constructors

	// default-constructor or constructors without arguments

	Student()
	{
		cout << "default-constructor..." << endl;
		name = "no name";
		age = 13;
		mark = 4.0;
		alive = true;
	}
	// methods
	string toString()
	{
		string s = "Name: " + name;
		s += ", age: " + to_string(age)
			+ ", average mark: " + to_string(mark)
			+ ", alive: " + (alive ? "yes" : "no");

		return s;
	}
};

