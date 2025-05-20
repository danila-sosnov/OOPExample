#include "Manager.h"
#include "Initializer.h"

int main() {
	
	Initializer initializer;
	Manager manager;

	int count;

	cout << "Input number of students: ";
	cin >> count;

	Group group(count);

	initializer.init(group);

	cout << "All students:\n";
	cout << "List of students:\n" << group.toString() << endl;
	

	int size = 0;
	
	Group bestGroup = manager.findBestStudents(group);
	cout << "\nList of best students: ";
	

	Group worstGroup = manager.findWorstStudents(group);
	cout << "\nList of worst students: ";
	



	

	return 0;
}
