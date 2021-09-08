/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fminardi <fminardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 17:35:55 by fminardi          #+#    #+#             */
/*   Updated: 2021/09/08 12:06:27 by fminardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"


Cure::Cure() : AMateria()
{
	this->type = "cure";
}

Cure::~Cure()
{
}

Cure* Cure::clone() const
{
	Cure *a = new Cure();
	return a;
}

Cure::Cure(const Cure& cure)
{
	*this = cure;
}
Cure& Cure::operator= (const Cure& cure)
{
	this->type = cure.type;
	return *this;

}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " + target.getName() + "'s wounds *" << std::endl;
}