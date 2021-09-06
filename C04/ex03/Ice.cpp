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