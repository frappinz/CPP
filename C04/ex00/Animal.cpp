#include "Animal.hpp"

void	Animal::makeSound()
{
	std::cout << "this is wrong!\n";
}

Animal::Animal()
{
	std::cout << "Animal costructor called\n";
}

Animal::~Animal(){
	std::cout << "Animal destructor called\n";
}

std::string Animal::getType()
{
	return this->type;
}