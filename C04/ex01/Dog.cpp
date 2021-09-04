#include "Dog.hpp"


Dog::Dog() : Animal()
{
	std::cout << "Dog costructor called\n";
	type = "Dog";
	brain = new Brain();
}

Dog::Dog(const Dog &dog) {
	brain = new Brain();
	*this = dog;
}

Dog &Dog::operator=(const Dog &dog) {
	std::cout << "Dog assignament operator called" << std::endl;
	type = dog.getType();
	*brain = *(dog.brain);
	return *this;
}

Dog::~Dog()
{
	delete(brain);
	std::cout << "Dog destructor called\n";
}

void	Dog::makeSound() const
{
	std::cout << "Wof Wof\n";
}

void	Dog::setIdea(const std::string &idea)
{
	brain->setIdea(idea);
}

std::string Dog::getIdea(void) const
{
	return (brain->getIdea());
}