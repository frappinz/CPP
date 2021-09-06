#include "Character.hpp"

Character::Character()
{
	std::cout << "Costructor called\n";
}

Character::Character(std::string name)
{
	this->Name = name;
	std::cout << "Costructor called\n";
}

Character::~Character()
{
	std::cout << "Destructor called\n";
}

std::string const & Character::getName() const
{
	return (this->Name);
}

void Character::equip(AMateria* m)
{

}
void Character::unequip(int idx)
{

}

void Character::use(int idx, ICharacter& target)
{
	invent[idx]->use(target);
}
