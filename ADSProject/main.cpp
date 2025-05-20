#include "Queue.h"

int main()
{
	Queue queue;
	int element;

	cout << "Input element into queue(for exit input 0):\n";
	do
	{
		cin >> element;
		if (element != 0)
		{
			queue.enqueue(element);
		}
	
	} while (element != 0);

	queue.dequeue();
	queue.dequeue();
	queue.dequeue();

	cout << queue.toString() << endl;

	return 0;
}