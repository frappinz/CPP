#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
}

void	HumanB::setWeapon(Weapon& weapon)
{
	this->weapon = &weapon;
}

void	HumanB::attack(void)
{
	std::cout << name << " attacks with his " << this->weapon->getType() << std::endl;
}


HumanB::~HumanB()
{
}

