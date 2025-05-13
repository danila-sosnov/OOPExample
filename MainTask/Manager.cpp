#include "Manager.h"

Group Manager::findBestStudents(Group group) {
	double bestMark = 8.5;

	int bestCount = 0;

	for (int i = 0; i < group.getCount(); i++)
	{
		if (group.get(i).getAverageMark() >= bestMark) {
			bestCount++;
		}
	}

	Group bestGroup(bestCount);

	for (int i = 0, j = 0; i < group.getCount(); i++)
	{
		if (group.get(i).getAverageMark() >= bestMark) {
			bestGroup.set(j, group.get(i));
			j++;
		}
	}

	return bestGroup;
}

Group Manager::findWorstStudents(Group group) {
	double worstMark = 6.0;

	int worstCount = 0;

	for (int i = 0; i < group.getCount(); i++)
	{
		if (group.get(i).getAverageMark() <= worstCount) {
			worstCount++;
		}
	}

	Group worstGroup(worstCount);

	for (int i = 0, j = 0; i < group.getCount(); i++)
	{
		if (group.get(i).getAverageMark() <= worstCount) {
			worstGroup.set(j, group.get(i));
			j++;
		}
	}

	return worstGroup;
}