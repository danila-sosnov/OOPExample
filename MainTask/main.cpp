#include "Initializer.h"

int main() {
	
	Student* list = nullptr;
	Initializer initializer;

	int count;

	cout << "Input number of students: ";
	cin >> count;

	initializer.init(list, count);



	for (int i = 0; i < count; i++)
	{
		cout << list[i].toString() << endl;

	}

	return 0;
}
