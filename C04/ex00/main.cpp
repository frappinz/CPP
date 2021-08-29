/* The word polymorphism means having many forms. 
In simple words, we can define polymorphism as the ability of a message to be 
displayed in more than one form. A real-life example of polymorphism, 
a person at the same time can have different characteristics. 
Like a man at the same time is a father, a husband, an employee. 
So the same person posses different behavior in different situations. 
This is called polymorphism. Polymorphism is considered as one of the
important features of Object Oriented Programming. */
#include "Animal.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	std::cout << "j is a: " << j->getType() << " " << std::endl;
	std::cout << "i is a: " << i->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();