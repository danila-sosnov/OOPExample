
#include "Worker.h"


class Manager : public Worker
{
public:

	Manager()
	{
		cout << "Manager default constuctor." << endl;
	}

	~Manager()
	{
		cout << "Manager destructor." << endl;
	}

	static Group findBestStudents(Group group);
	static Group findWorstStudents(Group group);
};