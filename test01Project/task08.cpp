#include <iostream>
#include <string>
using namespace std;

void init(int*& ptr)
{
	if (ptr == nullptr)
	{
		ptr = new int;
	}
	
	*ptr = 100;
}

int main()
{
	int* ptrValue = nullptr;
	
	init(ptrValue);

	cout << "After: " << *ptrValue << endl;
	return 0;
}