#include "ArrayList.h"

ArrayList::ArrayList() {
	list = nullptr;
	size = 0;
}

ArrayList::~ArrayList() {
	clear();
}

// O(N)
void ArrayList::add(int element) {
	if (isEmpty()) {
		size = 1;
		list = new int[size];
		list[0] = element;
	}
	else {
		int* temp = new int[size + 1];
		for (int i = 0; i < size; i++)
		{
			temp[i] = list[i];
		}

		temp[size] = element;
		delete[] list;
		list = temp;
		size++;
	}
}

// O(N)
void ArrayList::add(int index, int element) {
	if (isEmpty()) {
		size = 1;
		list = new int[size];
		list[0] = element;
	}
	else if (index < 0 || index >= size) {
		return;
	}
	else {
		size++;
		int* temp = new int[size];

		for (int i = 0, j = 0; j < size; j++)
		{
			if (i != index) {
				temp[j] = list[i];
				i++;
			}
			else {
				temp[j] = element;
			}
		}

		delete[] list;
		list = temp;
		size++;
	}
}


void ArrayList::addAll(int* elements, int size) {
	for (int i = 0; i < size; i++)
	{
		add(elements[i]);
	}
}

//void ArrayList::addAll(int index, int* elements, int size){}

void ArrayList::revome() {
	remove(size - 1);
}

// O(N)
void ArrayList::remove(int index) {
	if (!isEmpty()) {
		size--;
		int* temp = new int[size];

		for (int i = 0, j = 0; i < size; i++)
		{
			if (i != index) {
				temp[j] = list[i];
				j++;
			}
		}

		delete[] list;
		list = temp;
	}
}

void ArrayList::clear() {
	if (list != nullptr) {
		delete[] list;
		size = 0;
	}
}

bool ArrayList::isEmpty() {
	return size == 0;
}


// O(1)
int ArrayList::get(int index) {
	if (!isEmpty() && index >= 0 && index < size) {
		return list[index];
	}

	return 0;
}

// O(1)
void ArrayList::set(int index, int element) {
	if (!isEmpty() && index >= 0 && index < size) {
		list[index] = element;
	}
}

int ArrayList::getSize() {
	return size;
}

string ArrayList::toString() {
	string s = "List is empty.";

	if (!isEmpty()) {
		s = "";

		for (int i = 0; i < size; i++)
		{
			s += to_string(list[i]) + " ";
		}
	}

	return s;
}