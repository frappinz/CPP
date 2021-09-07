/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fminardi <fminardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 17:36:00 by fminardi          #+#    #+#             */
/*   Updated: 2021/09/07 17:36:01 by fminardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"


Ice::Ice() : AMateria()
{
	this->type = "ice";
}

Ice::~Ice()
{
}

Ice::Ice(const Ice& ice)
{
	*this = ice;
}

Ice& Ice::operator= (const Ice& ice)
{
	this->type = ice.type;
	return *this;
}


Ice* Ice::clone() const
{
	Ice *a = new Ice();
	return a;
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() + " *" << std::endl;
}