#include "Animal.hpp"

void	Animal::makeSound() const
{
	std::cout << "I don't know what animal I am\n";
}

Animal::Animal()
{
	type = "Animal";
	std::cout << "Animal costructor called\n";
}

Animal::~Animal()
{
	std::cout << "Animal destructor called\n";
}

Animal::Animal (const Animal& animal)
{
	*this = animal;
}

Animal& Animal::operator= (const Animal& assign)
{
	type = assign.type;
	return *this;
}

std::string Animal::getType() const
{
	return this->type;
}