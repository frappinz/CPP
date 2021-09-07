/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fminardi <fminardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 17:35:15 by fminardi          #+#    #+#             */
/*   Updated: 2021/09/07 17:35:16 by fminardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

void	WrongAnimal::makeSound() const
{
	std::cout << "This shouldn't be the output\n";
}

WrongAnimal::WrongAnimal()
{
	type = "WrongAnimal";
	std::cout << "WrongAnimal costructor called\n";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called\n";
}

WrongAnimal& WrongAnimal::operator= (const WrongAnimal& assign)
{
	type = assign.type;
	return *this;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wa)
{
	*this = wa;
}

std::string WrongAnimal::getType() const
{
	return this->type;
}