#include "Dog.hpp"


Dog::Dog() : Animal()
{
	Dog::type = "Dog";
	std::cout << "Dog costructor called\n";
}

Dog::~Dog
{
	std::cout << "Dog destructor called\n";
}

void	Dog::makeSound()
{
	std::cout << "il cane fa bau bau\n";
}