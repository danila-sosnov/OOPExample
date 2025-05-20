#include <iostream>
#include <string>
using namespace std;

void test(int* number)
{
	number++;
}

int main()
{
	int* ptrValue = new int;
	*ptrValue = 10;
	cout << "Before: " << value << endl;

	test(ptrValue);

	cout << "After: " << value << endl;
	return 0;
}