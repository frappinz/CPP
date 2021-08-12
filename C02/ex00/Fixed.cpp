#include "Fixed.hpp"

/* La differenza principale tra il costruttore di copie 
e l'operatore di assegnazione è quello copy constructor 
è un tipo di costruttore che aiuta a creare una copia di 
un oggetto già esistente senza influenzare i valori dell'
oggetto originale mentre l'operatore di assegnazione è 
un operatore che aiuta ad assegnare un nuovo valore a una 
variabile nel programma. */

Fixed::Fixed()
{
	std::cout << "Default constructor called\n";
	this->fp = 0;
}

Fixed::Fixed (const Fixed& fixed)
{
	std::cout << "Copy constructor called\n";
	*this = fixed;
}

Fixed& Fixed::operator = (const Fixed& assign)
{
	std::cout << "Assignation oerator called\n";
	fp = assign.getRawBits();
	return *this;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits called\n";
	return (this->fp);
}

void Fixed::setRawBits(int const raw)
{
	fp = raw;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}