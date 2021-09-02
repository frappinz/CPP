#include "Dog.hpp"


Dog::Dog()
{
	Dog::type = "Dog";
	std::cout << "Dog costructor called\n";
}

Dog::Dog(const Dog &dog) {
	*this = dog;
}

Dog &Dog::operator=(const Dog &dog) {
	type = dog.type;
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called\n";
}

void	Dog::makeSound() const
{
	std::cout << "Wof Wof\n";
}