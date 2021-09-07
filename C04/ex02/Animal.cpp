/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fminardi <fminardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 17:34:46 by fminardi          #+#    #+#             */
/*   Updated: 2021/09/07 17:34:46 by fminardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	type = "Animal";
	std::cout << "Animal costructor called\n";
}

Animal::~Animal()
{
	std::cout << "Animal destructor called\n";
}

Animal::Animal (const Animal& animal)
{
	std::cout << "ANIMAL COPY COSTRUCTOR\n";
	type = animal.getType();
}

void Animal::operator= (const Animal& assign)
{
	type = assign.type;
}

std::string Animal::getType() const
{
	return this->type;
}