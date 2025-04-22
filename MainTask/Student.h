#include <iostream>
#include <string>
using namespace std;

class Student {
public:
	// fields
	string name;
	int age;
	int* marks;
	int countMarks;
	bool alive;

	// constructors

	// default-constructor or constructors without arguments

	Student()
	{
		cout << "default-constructor..." << endl;
		name = "no name";
		age = 13;
		countMarks = 0;
		marks = nullptr;
		alive = true;
	}

	// constructors with arguments

	Student(string nm)
	{
		cout << "constructor with arguments (name)..." << endl;
		name = nm;
		age = 13;
		countMarks = 0;
		marks = nullptr;
		alive = true;
	}
	 // constructor with arguments

	Student(string nm, int a)
	{
		cout << "constructor with arguments (name,age)..." << endl;
		name = nm;
		age = a < 13 ? 13 : a;
		countMarks = 0;
		marks = nullptr;
		alive = true;
	}
	// canonical-constructor
	 Student(string nm, int a, int count, bool al)
	 {
		 cout << "canonical-constructor..." << endl;
		 name = nm;
		 age = a < 13 ? 13 : a;
		 countMarks = count;
		 marks = new int[count];

		 for (int i = 0; i < count; i++)
		 {
			 marks[i] = 4;
		 }

		 alive = al;
		 
	 }

	 // copy-constructor

	 Student(const Student& student)
	 {
		 cout << "copy-constructor..." << endl;
		 name = student.name;
		 age = student.age;
		 countMarks = student.countMarks;
		 marks = new int[countMarks];

		 for (int i = 0; i < countMarks; i++)
		 {
			 marks[i] = student.marks[i];
		 }

		 alive = student.alive;

	 }

	 // destructor
	 ~Student()
	 {
		 cout << "destructor..." << endl;

		 if (countMarks != 0)
		 {
			 delete[] marks;
		 }
		 
		 
	 }


	// methods
	string toString()
	{
		string s = "Name: " + name;
		s += ", age: " + to_string(age)
		+ ", marks: " + convert()
		+ ", alive: " + (alive ? "yes" : "no");

		return s;
	}

	string convert()
	{
		string s = "[";

		if (countMarks > 0)
		{
			for (int i = 0; i < countMarks - 1; i++)
			{
				s += to_string(marks[i]) + ", ";
			}

			s += to_string(marks[countMarks - 1]);
		}

		s += "]";

		return s;
		
	}

	int getMark(int index)
	{
		if (countMarks == 0 || index < 0
			|| index >= countMarks)
		{
			return -1;
		}

		return marks[index];
	}

	void setMark(int index, int mark)
	{
		if (countMarks == 0 || index < 0 || index >= countMarks 
			|| mark < 0 || mark > 10)
		{
			return;
		}

		marks[index] = mark;
	}
};

