#include "MateriaSource.hpp"


MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		inventario[i] = NULL;
}

MateriaSource::~MateriaSource()
{

}

MateriaSource::MateriaSource(MateriaSource& source)
{
	for (int i = 0; i < 4; i++)
		inventario[i] = NULL;
	*this = source;
}

MateriaSource& MateriaSource::operator= (MateriaSource& source)
{
	for (int i = 0; i < 4; i++) {
		if (inventario[i])
			delete inventario[i];
		inventario[i] = source.inventario[i]->clone();
	}
	return *this;
}


void MateriaSource::learnMateria(AMateria* materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (inventario[i] == NULL)
		{
			inventario[i] = materia->clone();
			return;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if(inventario[i]->getType() == type)
			return (inventario[i]->clone());
	}
	return NULL;
}