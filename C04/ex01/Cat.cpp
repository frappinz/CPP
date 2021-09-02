#include "Cat.hpp"

Cat::Cat()
{
	Cat::type = "Cat";
	Brain *brain = new Brain();
	brain->ideas[0] = "prrr";
	std::cout << "Cat costructor called\n";
}

Cat &Cat::operator=(const Cat &cat) {
	type = cat.type;
	delete (brain);
	brain = new Brain();
	*brain = *(cat.brain);
	return *this;
}

Cat::Cat(const Cat &cat)
{
	*this = cat;
}

Cat::~Cat ()
{
	delete(brain);
	std::cout << "Cat destructor called\n";
}

void	Cat::makeSound() const
{
	std::cout << "Meow Meow\n";
}