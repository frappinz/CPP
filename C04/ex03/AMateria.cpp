/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fminardi <fminardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 17:35:46 by fminardi          #+#    #+#             */
/*   Updated: 2021/09/07 17:35:47 by fminardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	//std::cout << "Costructor called\n";
}

AMateria::AMateria(std::string const & type)
{
	this->type = type;
}

AMateria::~AMateria()
{//	std::cout << "Destructor called\n";
}

std::string const& AMateria::getType() const
{
	return(this->type);
}
		
void AMateria::use(ICharacter& target)
{
	(void)target;
}