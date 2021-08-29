#include "Cat.hpp"

Cat::Cat() : Animal()
{
	Cat::type = "Cat";
	std::cout << "Cat costructor called\n";
}

Cat::~Cat{
	std::cout << "Cat destructor called\n";
}

void	Cat::makeSound()
{
	std::cout << "il gatto fa miao miao\n";
}