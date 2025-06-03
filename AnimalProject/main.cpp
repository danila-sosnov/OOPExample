#include "SoundStudio.h"
#include "Dog.h"
#include "Cat.h"

int main()
{
	SoundStudio studio;

	Dog* dog = new Dog("Laika");
	Cat* cat = new Cat("Adel");

	studio.makeItSound(dog);
	studio.makeItSound(cat);

	return 0;
}
