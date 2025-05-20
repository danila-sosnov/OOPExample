#pragma once
#include <iostream>
#include <string>
using namespace std;

class Queue
{

private:

	int* queue;
	int size;

public:

	Queue();
	~Queue();

	void enqueue(int element);
	int dequeue();
	void clear();
	int peek();
	bool isEmpty();
	int getSize();
	string toString();
};

