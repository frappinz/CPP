#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
class MateriaSource : public IMateriaSource
{
	private:
		AMateria *inventario[4];
	public:
		MateriaSource();
		~MateriaSource();
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};

#endif