#include "SoundStudio.h"
#include "Dog.h"
#include "Cat.h"
#include "Crocodile.h"

int main()
{
	SoundStudio studio;

	Dog* dog = new Dog("Laika");
	Cat* cat = new Cat("Adel");
	Crocodile* crocodile = new Crocodile("Pushok");

	int size = 3;

	animal** animals = new animal * [size] {dog, cat, crocodile};

	studio.makeItSound(animals, size);
	

	return 0;
}
