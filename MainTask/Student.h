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

	// constructors with arguments

	Student(string nm)
	{
		cout << "constructor with arguments (name)..." << endl;
		name = nm;
		age = 13;
		mark = 4.0;
		alive = true;
	}
	 // constructor with arguments

	Student(string nm, int a)
	{
		cout << "constructor with arguments (name,age)..." << endl;
		name = nm;
		age = a < 13 ? 13 : a;
		mark = 4.0;
		alive = true;
	}
	// canonical-constructor
	 Student(string nm, int a, double m, bool al)
	 {
		 cout << "canonical-constructor..." << endl;
		 name = nm;
		 age = a < 13 ? 13 : a;
		 mark = m;
		 alive = al;
		 
	 }

	 // copy-constructor

	 Student(const Student& student)
	 {
		 cout << "copy-constructor..." << endl;
		 name = student.name;
		 age = student.age;
		 mark = student.mark;
		 alive = student.alive;

	 }

	 // destructor
	 ~Student()
	 {
		 cout << "destructor..." << endl;
		 
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

