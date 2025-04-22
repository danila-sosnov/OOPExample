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

	Student(string name)
	{
		cout << "constructor with arguments (name)..." << endl;
		this->name = name;
		age = 13;
		countMarks = 0;
		marks = nullptr;
		alive = true;
	}
	 // constructor with arguments

	Student(string name, int age)
	{
		cout << "constructor with arguments (name,age)..." << endl;
		this->name = name;
		this->age = age < 13 ? 13 : age;
		countMarks = 0;
		marks = nullptr;
		alive = true;
	}
	// canonical-constructor
	 Student(string name, int age, int countMarks, bool alive)
	 {
		 cout << "canonical-constructor..." << endl;
		 this->name = name;
		 this->age = age < 13 ? 13 : age;
		 this->countMarks = countMarks;
		 marks = new int[countMarks];

		 for (int i = 0; i < countMarks; i++)
		 {
			 marks[i] = 4;
		 }

		 this->alive = alive;
		 
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
			 delete[] this->marks;
		 }
		 
		 
	 }


	// methods
	string toString()
	{
		string s = "Name: " + this->name;
		s += ", age: " + to_string(this->age)
		+ ", marks: " + this->convert()
		+ ", alive: " + (this->alive ? "yes" : "no");

		return s;
	}

	string convert()
	{
		string s = "[";

		if (this->countMarks > 0)
		{
			for (int i = 0; i < this->countMarks - 1; i++)
			{
				s += to_string(this->marks[i]) + ", ";
			}

			s += to_string(this->marks[this->countMarks - 1]);
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

