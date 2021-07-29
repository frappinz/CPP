#include "HumanA.hpp"

void	HumanA::attack(void)
{
	std::cout << name << "attacks with his " << weapon.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon& weapon) : weapon(weapon)
{
	this->name = name;
	this->weapon = weapon;
}