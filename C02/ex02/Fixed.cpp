#include "Fixed.hpp"

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
	return this->fp < fix.getRawBits();
}

bool Fixed::operator> (const Fixed& fix) const
{ 
	return this->fp > fix.getRawBits(); 
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
	Fixed result;
	result.setRawBits((this->fp + fix.getRawBits()));
	return result;
}

Fixed Fixed::operator-(const Fixed& fix) const
{
	Fixed result;
	result.setRawBits((this->fp - fix.getRawBits()));
	return result;
}

Fixed Fixed::operator*(const Fixed& fix) const
{
	Fixed result;
	result.setRawBits((this->fp * fix.getRawBits()) >> this->bits);
	return result;
}

Fixed Fixed::operator/(const Fixed& fix) const 
{
	Fixed result;
	result.setRawBits((this->fp / fix.getRawBits()) >> this->bits);
	return result;
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