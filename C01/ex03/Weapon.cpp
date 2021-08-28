#include "Weapon.hpp"

const std::string& Weapon::getType(void)
{
	const std::string &typeref = type;
	return(typeref);
}

void	Weapon::setType(std::string string)
{
	type = string;
}

Weapon::Weapon(std::string type)
{
	this->type = type;
}

Weapon::~Weapon()
{
}