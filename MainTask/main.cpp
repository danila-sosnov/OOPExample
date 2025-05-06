#include "Manager.h"

void showAllStudents(Student* list, int count)
{
	for (int i = 0; i < count; i++)
	{
		cout << list[i].toString() << endl;

	}
}
int main() {
	
	Student* list = nullptr;
	Initializer initializer;
	Manager manager;

	int count;

	cout << "Input number of students: ";
	cin >> count;

	initializer.init(list, count);

	cout << "All students:\n";
	showAllStudents(list, count);

	int size = 0;
	Student* bestList = manager.findBestStudents(list, count, size);
	cout << "\nList of best students: ";
	showAllStudents(bestList, size);

	Student* worstList = manager.findWorstStudents(list, count, size);
	cout << "\nList of worst students: ";
	showAllStudents(worstList, size);



	

	return 0;
}
