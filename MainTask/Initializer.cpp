#include "Initializer.h"

void Initializer::init(Student*& list, int count) {

	if (list == nullptr && count > 0)
	{
		list = new Student[count];
	}
		
	string names[]{ "Alex", "Matvey", "Veronika",
		"Sofia", "Alice", "Anna", "Stepan",
	"Daniil", "Arsenyi", "Vlad", "Bogdan", "Victor",
	"Ilya", "Peter", "Harry", "Gleb" };


	int minAge = 13;
	int maxAge = 18;

	int minMark = 6;
	int maxMark = 10;

	for (int i = 0; i < count; i++)
	{
		list[i].setName(names[rand() % 15]);
		list[i].setAge(rand() % (maxAge - minAge + 1) + minAge);
		for (int j = 0; j < list[i].getCountMarks(); j++)
		{
				
			list[i].setMark(j, rand() % (maxMark - minMark + 1) + minMark);
		}
	}
}