#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
	private:
		AMateria *invent[4];
	public:
		Character(/* args */);
		~Character();
		void use(int idx, ICharacter& target);
};

#endif