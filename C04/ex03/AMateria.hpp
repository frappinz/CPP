#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "IMateriaSource.hpp"
#include "ICharacter.hpp"
#include <iostream>
class AMateria
{
	protected:
		std::string type;
	public:
		AMateria();
		~AMateria();
		AMateria(std::string const & type);
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		void learnMateria(AMateria*);
		virtual void use(ICharacter& target);
};

#endif