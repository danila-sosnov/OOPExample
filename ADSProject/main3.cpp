#include "Stack.h"


bool isPalindrom(string word)
{
	Stack stack;

	int size = word.length() / 2;

	for (int i = 0; i < size; i++)
	{
		stack.push(word[i]);
	}

	if (word.length / 2 == 1)
	{
		size++;
	}

	for (int i = size; i < word.length; i++)
	{
		if (word[i] != stack.pop())
		{
			return false;
		}

		return true;
	}
}
int main()
{
	Stack stack;
	string word;

	cout << "Input your string: ";
	cin >> word;

	string msg = (isPalindrom(word) ? "yes" : "no");

	cout << msg;

	return 0;
}