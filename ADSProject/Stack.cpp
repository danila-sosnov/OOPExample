#include "Stack.h"

Stack::Stack()
{
	stack = nullptr;
	size = 0;
}

Stack::~Stack()
{
	clear();
}

void Stack::push(int element)
{
	if (isEmpty())
	{
		size = 1;
		stack = new int[size];
		stack[0] = element;
	}
	else
	{
		int* temp = new int[size + 1];

		for (int i = 0; i < size; i++)
		{
			temp[i] = stack[i];
		}

		temp[size] = element;
		size++;
		delete[] stack;
		stack = temp;
	}
}
int Stack::pop()
{
	if (isEmpty())
	{
		return 0;
	}

	int element = stack[size - 1];

	size--;
	int* temp = new int[size];

	for (int i = 0; i < size; i++)
	{
		temp[i] = stack[i];
	}

	delete[] stack;
	stack = temp;

	return element;
}
int Stack::peek()
{
	if (!isEmpty())
	{
		return stack[size - 1];
	}

	return 0;
}
bool Stack::isEmpty()
{
	return size == 0;
}

void Stack::clear()
{
	if (!isEmpty())
	{
		delete[] stack;
		size = 0;
	}
}

string Stack::toString()
{
	string s = "Stack is empty.";

	if (!isEmpty())
	{
		s = "";

		for (int i = size - 1; i >= 0; i--)
		{
			s += to_string(stack[i]) + " ";
		}
	}

	return s;
}
