#include "Stack.h"

int main()
{
	Stack stack;
	int element;

	cout << "Input element into stack(for exit input 0):\n";
	do
	{
		cin >> element;
		if (element != 0)
		{
			stack.push(element);
		}

	} while (element != 0);

	stack.pop();
	stack.pop();
	stack.pop();

	cout << stack.toString() << endl;

	return 0;
}