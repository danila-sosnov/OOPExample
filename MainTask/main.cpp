#include "Student.h"

int main() {
	Student student("Alex", 14, 5, true);



	cout << student.toString() << endl;
	
	for (int i = 0; i < student.countMarks; i++)
	{
		student.setMark(i, rand() % 7 + 4);

	}

	cout << student.toString() << endl;

	cout << "Student's marks: ";

	for (int i = 0; i < student.countMarks; i++)
	{
		cout << student.getMark(i) << " ";

	}

	return 0;
}
