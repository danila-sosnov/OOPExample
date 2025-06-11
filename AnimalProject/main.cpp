#include "SoundStudio.h"
#include "Dog.h"
#include "Cat.h"
#include "Crocodile.h"
#include "animal.h"

int main()
{
	animal a1, a2, a3;

	cout << "Number of animals: " << a3.getCount() << endl;
	cout << "Number of animals: " << animal::getCount() << endl;

	{
		animal a4, a5;
		cout << "Number of animals: " << animal::getCount() << endl;
	}

	cout << "Number of animals: " << animal::getCount() << endl;

	return 0;
}
