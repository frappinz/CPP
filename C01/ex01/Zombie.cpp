#include "Zombie.hpp"

void	Zombie::setName(std::string string)
{
	this->name = string;
}

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	std::cout << name << " è stato ucciso da Rick\n";
}

void Zombie::announce(void)
{
	std::cout << "<" + name  + ">   Braiiiiiiinnnzzz. . .\n";
}