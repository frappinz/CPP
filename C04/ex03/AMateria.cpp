#include "AMateria.hpp"

AMateria::AMateria()
{
	//std::cout << "Costructor called\n";
}

AMateria::AMateria(std::string const & type)
{
	this->type = type;
}

AMateria::~AMateria()
{//	std::cout << "Destructor called\n";
}

std::string const& AMateria::getType() const
{
	return(this->type);
}
		
void AMateria::use(ICharacter& target)
{
	(void)target;
}