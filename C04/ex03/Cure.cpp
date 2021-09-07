#include "Cure.hpp"


Cure::Cure() : AMateria()
{
	this->type = "cure";
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

Cure::Cure(const Cure& cure)
{
	*this = cure;
}
Cure& Cure::operator= (const Cure& cure)
{
	this->type = cure.type;
	return *this;

}


void Cure::use(ICharacter& target)
{
	std::cout << "* heals " + target.getName() + "'s wounds *" << std::endl;
}