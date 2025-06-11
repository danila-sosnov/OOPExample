#include "Initializer.h"

void Initializer::init(Group group) {
	if (group.getCapacity() <= 0) {
		return;
	}

	string names[]{ "Alex", "Matvey", "Veronika",
		"Sofia", "Alice", "Anna", "Stepan",
	"Daniil", "Arsenyi", "Vlad", "Bogdan", "Victor",
	"Ilya", "Peter", "Harry", "Gleb" };

	int minAge = 13;
	int maxAge = 18;

	int minMark = 6;
	int maxMark = 10;

	for (int i = 0; i < group.getCapacity(); i++)
	{
		group.get(i).setName(names[rand() % 15]);
		group.get(i).setAge(rand() % (maxAge - minAge + 1) + minAge);
		for (int j = 0; j < group.get(i).getCountMarks(); j++)
		{			
			group.get(i).setMark(j, rand() % (maxMark - minMark + 1) + minMark);
		}
	}
}