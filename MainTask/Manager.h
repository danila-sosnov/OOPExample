
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

};