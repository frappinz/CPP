#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	Animal *animalini[9];
	int y;

	for (y = 0; y < 4; y++)
	{
		animalini[y] = new Dog();
	}
	while (y < 9)
	{
		animalini[y] = new Cat();
		i++;
	}
	const Animal *b(i);
	std::cout << b->getType() << std::endl;
	delete j;
	delete i;
}
