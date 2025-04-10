#include "Student.h"

int main() {
	Student student1;
	Student student2("Alex");
	Student student3("Matvey", 14);
	Student student4("Bogdan", 15, 10, true);

	cout << student1.toString() << endl;
	cout << student2.toString() << endl;
	cout << student3.toString() << endl;
	cout << student4.toString() << endl;



	


	return 0;
}
