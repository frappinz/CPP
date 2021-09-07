#include "Character.hpp"

Character::Character()
{
	//std::cout << "Costructor called\n";
}

Character::Character(std::string name)
{
	this->Name = name;
	for (int i = 0; i < 4; i++)
		invent[i] = NULL;
	//std::cout << "Costructor called\n";
}

Character::~Character()
{
	//std::cout << "Destructor called\n";
}

Character::Character(Character& c)
{
	*this = c;
	this->Name = c.getName();
}

Character& Character::operator= (Character& c)
{
	for (int i = 0; i < 4; i++) {
		if (c.invent[i]) {
			invent[i] = c.invent[i]->clone();
			delete c.invent[i];
			c.invent[i] = NULL;
		}
	}
	Name.assign(c.getName());
	return *this;
}


std::string const & Character::getName() const
{
	return (this->Name);
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (invent[i] == NULL)
		{
			invent[i] = m;
			return;
		}
	}
}
void Character::unequip(int idx)
{
	invent[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (invent[idx])
		invent[idx]->use(target);
}
