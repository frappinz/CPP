#include "Fixed.hpp"

/* La differenza principale tra il costruttore di copie 
e l'operatore di assegnazione è quello copy constructor 
è un tipo di costruttore che aiuta a creare una copia di 
un oggetto già esistente senza influenzare i valori dell'
oggetto originale mentre l'operatore di assegnazione è 
un operatore che aiuta ad assegnare un nuovo valore a una 
variabile nel programma. */

/* Multiply the float by 2^(number of fractional bits for the type), eg. 2^8 for 24.8
Round the result (just add 0.5) if necessary, and floor it (or cast to an integer type) leaving an integer value.
Assign this value into the fixed-point type. */

//shifting by one bit is like dividing the number by 2, shifiting to the left is like multipling it for two 


Fixed::Fixed()
{
	//std::cout << "Default constructor called\n";
}

Fixed::Fixed(const int n)
{
	//std::cout << "Int constructor called\n";
	this->fp = n * (1<<8);
}

Fixed::Fixed(const float n)
{
	//std::cout << "Float constructor called\n";
	this->fp = (roundf(n*(1<<8)));
}

Fixed::Fixed (const Fixed& fixed)
{
	//std::cout << "Copy constructor called\n";
	*this = fixed;
}


int	Fixed::getRawBits(void) const
{
	return (this->fp);
}

void Fixed::setRawBits(int const raw)
{
	fp = raw;
}

Fixed::~Fixed()
{
	//std::cout << "Destructor called\n";
}

int Fixed::toInt( void ) const
{
	return ((int)this->fp/(1<<8));
}

float Fixed::toFloat( void ) const
{
	return ((float)this->fp / (1 << this->bits));
}

std::ostream& operator<<(std::ostream& out, const Fixed& f)
{
   return out << f.toFloat();
}

bool Fixed::operator< (const Fixed& fix) const
{
	return this->fp > fix.getRawBits();
}

bool Fixed::operator> (const Fixed& fix) const
{ 
	return this->fp < fix.getRawBits(); 
}

bool Fixed::operator<=(const Fixed& fix) const
{
	return !(this->fp > fix.getRawBits());
}

bool Fixed::operator>=(const Fixed& fix) const
{ 
	return !(this->fp < fix.getRawBits()); 
}

bool Fixed::operator==(const Fixed& fix) const
{
	return this->fp == fix.getRawBits();
}

bool Fixed::operator!=(const Fixed& fix) const
{ 
	return !(this->fp == fix.getRawBits()); 
}

Fixed	Fixed::operator++()
{
	this->fp++;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp;
	tmp = *this;
	this->fp++;
	return (tmp);
}

Fixed	Fixed::operator--()
{
	this->fp--;
	return *this;

}

Fixed	Fixed::operator --(int)
{
	Fixed tmp;
	tmp = *this;
	operator--();
	return (tmp);
}

Fixed Fixed:: operator+(const Fixed& fix) const
{
	return ((this->fp + fix.getRawBits())/(1<<8));
}

Fixed Fixed::operator-(const Fixed& fix) const
{
	return (this->fp - fix.getRawBits())/(1<<8);
}

Fixed Fixed::operator*(const Fixed& fix) const
{
	return ((this->fp >> 8) * (fix.getRawBits() >> 8));
}

Fixed Fixed::operator/(const Fixed& fix) const 
{
	return (fp / fix.getRawBits())/(1<<8);
}

Fixed & Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed & Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

const Fixed & Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed& Fixed::operator = (const Fixed& assign)
{
	//std::cout << "Assignation oerator called\n";
	fp = assign.getRawBits();
	return *this;
}