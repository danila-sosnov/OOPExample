#pragma once
#include "Student.h"

class Group
{
private:
	Student* list;
	int count;
	int capacity;
public:
	Group();
	Group(int capacity);
	Group(Student* list, int count);
	~Group();

	Student get(int index);
	void set(int index, Student student);
	int getCount();
	int getCapacity();
	void add(Student student);
	//	void add(int index, Student student);
	void remove(Student student);
	void remove(int index);
	void clear();
	bool isEmpty();
	string toString();
};