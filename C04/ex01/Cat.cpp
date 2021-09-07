/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fminardi <fminardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 17:34:26 by fminardi          #+#    #+#             */
/*   Updated: 2021/09/07 17:34:26 by fminardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat costructor called\n";
	Cat::type = "Cat";
	brain = new Brain();
}

Cat &Cat::operator=(const Cat &cat) {
	std::cout << "Cat assignament operator called" << std::endl;
	type = cat.getType();
	*brain = *cat.brain;
	return *this;
}

Cat::Cat(const Cat &cat)
{
	std::cout << "copy costructor CAT called\n";
	brain = new Brain();
	*this = cat;
}

Cat::~Cat ()
{
	delete brain;
	std::cout << "Cat destructor called\n";
}

void	Cat::makeSound() const
{
	std::cout << "Meow Meow\n";
}

void	Cat::setIdea(const std::string &idea)
{
	brain->setIdea(idea);
}

std::string Cat::getIdea(void) const
{
	return (brain->getIdea());
}