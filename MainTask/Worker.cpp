#include "Worker.h"


Worker::Worker() : Worker("", 0, false, "", 0.0)
{
	cout << "Worker default constuctor." << endl;
}

Worker::Worker(string name, int age, bool gender, string company, double salary)
{
	this->name = name;
	this->age = age;
	this->gender = gender;
	this->company = company;
	this->salary = salary;
}

Worker::Worker(const Worker& worker) : Worker(worker.name, worker.age, worker.gender,
	worker.company, worker.salary) {}

Worker::~Worker()
{
	cout << "Worker destructor." << endl;
}

string Worker::getCompany()
{
	return company;
}
void Worker::setCompany(string company)
{
	this->company = company;
}
double Worker::getSalary()
{
	return salary;
}
void Worker::setSalary(double salary)
{
	this->salary = salary;
}
string Worker::toString()
{
	string s = "";

	s += name + ", age = " + to_string(age)
		+ ", gender: " + (gender ? "male" : "female")
		+ ", company = " + company
		+ ", salary = " + to_string(salary);

	return s;

}
