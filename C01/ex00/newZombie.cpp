#include "Zombie.hpp"

void	Zombie::setName(std::string string)
{
	this->name = string;
}

Zombie* newZombie( std::string name )
{
	Zombie *zombie;
	zombie = new Zombie;
	zombie->setName(name);
	return (zombie);
}