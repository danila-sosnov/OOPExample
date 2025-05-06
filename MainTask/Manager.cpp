#include "Manager.h"

Student* Manager::findBestStudents(Student* list, int count, int& bestCount)
{
	double bestMark = 8.5;

	bestCount = 0;

	for (int i = 0; i < count; i++)
	{
		if (list[i].getAverageMark() >= bestMark)
		{
			bestCount++;
		}
	}

	Student* bestList = new Student[bestCount];

	for (int i = 0, j = 0; i < count; i++)
	{
		if (list[i].getAverageMark() >= bestMark)
		{
			bestList[j] = list[i];
			j++;
		}
	}

	return bestList;
}

Student* Manager::findWorstStudents(Student* list, int count, int& worstCount)
{
	double worstMark = 6.0;

	worstCount = 0;

	for (int i = 0; i < count; i++)
	{
		if (list[i].getAverageMark() <= worstMark)
		{
			worstCount++;
		}
	}

	Student* worstList = new Student[worstCount];

	for (int i = 0, j = 0; i < count; i++)
	{
		if (list[i].getAverageMark() <= worstMark)
		{
			worstList[j] = list[i];
			j++;
		}
	}

	return worstList;

}
