#include "Cure.hpp"


Cure::Cure(/* args */)
{
}

Cure::~Cure()
{
}

Cure* Cure::clone() const
{
	Cure *a = new Cure();
	a->type = this->type;
	return a;
}

void Cure::use(ICharacter& target)
{
	
}