/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fminardi <fminardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 15:32:03 by fminardi          #+#    #+#             */
/*   Updated: 2021/08/30 15:32:03 by fminardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* Multiply the float by 2^(number of fractional bits for the type), eg. 2^8 for 24.8
Round the result (just add 0.5) if necessary, and floor it (or cast to an integer type) leaving an integer value.
Assign this value into the fixed-point type. */

//shifting by one bit is like dividing the number by 2, shifiting to the left is like multipling it for two 


Fixed::Fixed()
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called\n";
	this->fp = n * (1<<8);
}

Fixed::Fixed(const float n)
{
	std::cout << "Float constructor called\n";
	this->fp = (roundf(n*(1<<8)));
}

Fixed::Fixed (const Fixed& fixed)
{
	std::cout << "Copy constructor called\n";
	*this = fixed;
}


int	Fixed::getRawBits(void) const
{
	return (this->fp);
}


Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
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

Fixed& Fixed::operator = (const Fixed& assign)
{
	std::cout << "Assignation operator called\n";
	fp = assign.getRawBits();
	return *this;
}