#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const Animal *animalini[2];
	
	animalini[0] = new Dog();
	animalini[1] = new Cat();
	i->setIdea("Miaooo");
	const Animal *copy(i);
	std::cout << "Dimostrazione deep copy:\n";
	std::cout << "Idea gatto originale: " << i->getIdea() << std::endl;
	std::cout << "Idea gatto copiato: " << copy->getIdea() << std::endl;

	copy->setIdea("MEOW\n");
	std::cout << "Cambiando idea al gatto copiato: \n";
	std::cout << "Idea gatto originale: " << i->getIdea() << std::endl;
	std::cout << "Idea gatto copiato: " << copy->getIdea() << std::endl;
	delete animalini[0];
	delete animalini[1];
	delete j;
	delete i;
}
