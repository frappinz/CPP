/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fminardi <fminardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 17:34:22 by fminardi          #+#    #+#             */
/*   Updated: 2021/09/07 17:34:23 by fminardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Default BRAIN costructor called\n";
}

Brain::~Brain()
{
	std::cout << "Default BRAIN decostructor called\n";

}

Brain & Brain::operator=(const Brain &brain)
{
	std::cout << "Assignaton operator brain called\n";
	for (int i = 0; i < 100; i++)
		ideas[i] = brain.ideas[i];
	return *this;
}

Brain::Brain(const Brain &brain)
{
	std::cout << "Default BRAIN copycostructor called\n";
	for (int i = 0; i < 100; i++)
		this->ideas[i] = brain.ideas[i];
}

void	Brain::setIdea(const std::string &idea){
	ideas[0] = idea;
}

std::string Brain::getIdea(void) const 
{
	return this->ideas[0];
}