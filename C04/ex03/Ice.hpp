#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
class Ice : public AMateria
{
	public:
		Ice();
		~Ice();
		Ice(const Ice &ice);
		Ice& operator=(const Ice &ice);
		Ice* clone() const;
		void use(ICharacter& target);

};

#endif


