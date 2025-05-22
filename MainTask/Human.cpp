#include "Human.h"

Human::Human() : Human("", 0, false) {

	cout << "Human default constuctor." << endl;
}

Human::Human(string name, int age, bool gender)
{
	this->name = name;
	this->age = age;
	this->gender = gender;
}
Human::Human(const Human& human) :
	Human(human.name, human.age, human.gender) {}



Human::~Human()
{
	cout << "Human destructor." << endl;
}

int Human::getAge()
{
	return age;
}
void Human::setAge(int age)
{
	this->age = age;
}

string Human::getName()
{
	return name;
}
void Human::setName(string name)
{
	this->name = name;
}
bool Human::isGender()
{
	return gender;
}
void Human::setGender(bool gender)
{
	this->gender = gender;
}

string Human::toString()
{
	string s = "";

	s += name + "age = " + to_string(age)
		+ "gender: " + (gender ? "male" :
			"female");

	return s;
}