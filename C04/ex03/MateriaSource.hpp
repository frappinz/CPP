#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"
class MateriaSource : public IMateriaSource
{
	private:
		AMateria *inventario[4];
	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource(MateriaSource& source);
		MateriaSource& operator= (MateriaSource& source);
		void learnMateria(AMateria* materia);
		AMateria* createMateria(std::string const & type);
};

#endif