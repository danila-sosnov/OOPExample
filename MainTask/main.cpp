#include "Student.h"

int main() {
	Student student1{};

	cout << "Before: " << student1.toString() << endl;

	student1.name = "Alex";
	student1.age = 14;
	student1.mark = 8.9;
	student1.alive = true;

	cout << "After: " << student1.toString() << endl;


	return 0;
}
