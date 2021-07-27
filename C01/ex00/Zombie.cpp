#include "Zombie.hpp"


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