#include "Group.h"

Group::Group() : Group(20) {
}

Group::Group(int capacity) {
	this->capacity = capacity;
	list = new Student[capacity];
	count = capacity;
}

Group::Group(Student* list, int count) {
	if (count > 0 && list != nullptr) {
		this->count = count;
		capacity = count;
		list = new Student[count];

		for (int i = 0; i < count; i++)
		{
			this->list[i] = list[i];
		}
	}
}

Group::~Group() {
	if (list != nullptr) {
		delete[] list;
	}
}

Student Group::get(int index) {
	if (count > 0 && index >= 0 && index < count) {
		return list[index];
	}

	return Student();
}

void Group::set(int index, Student student) {
	if (count > 0 && index >= 0 && index < count) {
		list[index] = student;
	}
}

int Group::getCount() {
	return count;
}

void Group::add(Student student) {
	if (list != nullptr && count < capacity) {
		list[count] = student;
		count++;
	}
}

//void Group::add(int index, Student student);
void Group::remove(Student student) {
	for (int i = 0; i < count; i++)
	{
		if (list[i].getName() == student.getName()
			&& list[i].getAge() == student.getAge()
			&& list[i].isAlive() == student.isAlive()) {
			for (int j = i + 1; j < count; j++)
			{
				list[j - 1] = list[j];
			}
			count--;
			break;
		}
	}
}

void Group::remove(int index) {
	for (int i = index + 1; i < count; i++)
	{
		list[i - 1] = list[i];
		count--;
		break;
	}
}

void Group::clear() {
	count = 0;
}

bool Group::isEmpty() {
	return count == 0;
}

string Group::toString() {
	string s = "";

	if (list != nullptr && count > 0) {
		for (int i = 0; i < count; i++)
		{
			s += list[i].toString() + "\n";
		}
	}
	else {
		s = "List is empty.";
	}

	return s;
}

int Group::getCapacity() {
	return capacity;
}