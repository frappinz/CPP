#include "Cat.hpp"

Cat::Cat()
{
	Cat::type = "Cat";
	std::cout << "Cat costructor called\n";
}

Cat &Cat::operator=(const Cat &cat) {
	type = cat.type;
	return *this;
}

Cat::Cat(const Cat &cat)
{
	*this = cat;
}

Cat::~Cat (){
	std::cout << "Cat destructor called\n";

}

void	Cat::makeSound() const
{
	std::cout << "Meow Meow\n";
}