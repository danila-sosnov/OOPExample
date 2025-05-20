#include "Student.h"

string Student::convert() {
	string s = "[";

	if (this->countMarks > 0) {
		for (int i = 0; i < this->countMarks - 1; i++)
		{
			s += to_string(this->marks[i]) + ", ";
		}

		s += to_string(this->marks[this->countMarks - 1]);
	}

	s += "]";

	return s;
}

string Student::getName() {
	return name;
}

void Student::setName(string name) {
	this->name = name;
}

int Student::getAge() {
	return age;
}

void Student::setAge(int age) {
	if (age >= 13 && age <= 18) {
		this->age = age;
	}
}

int* Student::getMarks() {
	return marks;
}

void Student::setMarks(int* marks, int count) {
	this->marks = marks;
	countMarks = count;
}

int Student::getCountMarks() {
	return countMarks;
}

bool Student::isAlive() {
	return alive;
}

void Student::setAlive(bool alive) {
	this->alive = alive;
}

double Student::getAverageMark() {
	double sum = 0;

	for (int i = 0; i < countMarks; i++)
	{
		sum += marks[i];
	}

	return sum / countMarks;
}

// canonical-constructor
Student::Student(string name, int age, int countMark, bool alive) {
	//cout << "canonical-constructor ..." << endl;
	this->name = name;
	this->age = age;
	this->countMarks = countMark;
	marks = new int[countMark];

	for (int i = 0; i < countMark; i++)
	{
		marks[i] = 4;
	}

	this->alive = alive;
}

// copy-constructor
Student::Student(const Student& student) : Student(student.name,
	student.age, student.countMarks, student.alive)
{
	//cout << "copy-constructor ..." << endl;

	for (int i = 0; i < countMarks; i++)
	{
		marks[i] = student.marks[i];
	}
}

// destructor
Student::~Student() {
	//cout << "destructor..." << endl;

	if (countMarks > 0) {
		delete[] this->marks;
	}
}

// methods
string Student::toString() {
	string s = "Name: " + this->name;
	s += ", age: " + to_string(this->age);
	s += ", marks " + this->convert();
	s += ", alive: ";
	s += this->alive ? "yes" : "no";
	return s;
}

int Student::getMark(int index) {
	if (countMarks == 0 || index < 0
		|| index >= countMarks) {
		return -1;
	}

	return marks[index];
}

void Student::setMark(int index, int mark) {
	if (countMarks == 0 || index < 0 || index >= countMarks
		|| mark < 0 || mark > 10) {
		return;
	}

	marks[index] = mark;
}