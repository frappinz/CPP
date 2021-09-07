#include "Ice.hpp"


Ice::Ice() : AMateria()
{
	this->type = "ice";
}

Ice::~Ice()
{
}

Ice::Ice(const Ice& ice)
{
	*this = ice;
}

Ice& Ice::operator= (const Ice& ice)
{
	this->type = ice.type;
	return *this;
}


Ice* Ice::clone() const
{
	Ice *a = new Ice();
	return a;
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() + " *" << std::endl;
}