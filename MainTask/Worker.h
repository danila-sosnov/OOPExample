#pragma once
#include "Human.h"
class Worker :	public Human {

public:

	string company;
	double salary;


	Worker()
	{
		cout << "Worker default constuctor." << endl;
	}

	Worker(string name, int age, bool gender, string company, double salary);
	Worker(const Worker& worker);

	~Worker()
	{
		cout << "Worker destructor." << endl;
	}

	string getCompany();
	void setCompany(string company);
	double getSalary();
	void setSalary(double salary);
	string toString();
};

