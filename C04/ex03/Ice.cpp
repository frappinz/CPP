#include "Ice.hpp"


Ice::Ice(/* args */)
{
}

Ice::~Ice()
{
}


Ice* Ice::clone() const
{
	Ice *a = new Ice();
	a->type = this->type;
	return a;
}

void Ice::use(ICharacter& target)
{
	std::cout << "*shoots an ice bolt at " << target.getName() << std::endl;
}