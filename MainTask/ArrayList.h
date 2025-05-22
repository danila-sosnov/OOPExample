#pragma once
#include <iostream>
#include <string>
using namespace std;

class ArrayList
{
private:
	int* list;
	int size;

public:
	ArrayList();
	~ArrayList();

	void add(int element);
	void add(int index, int element);
	void addAll(int* elements, int size);
	//void addAll(int index, int* elements, int size);
	void revome();
	void remove(int index);
	void clear();
	bool isEmpty();
	int get(int index);
	void set(int index, int element);
	int getSize();
	string toString();
};
