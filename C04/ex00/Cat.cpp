/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fminardi <fminardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 17:33:47 by fminardi          #+#    #+#             */
/*   Updated: 2021/09/07 17:33:47 by fminardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	Cat::type = "Cat";
	std::cout << "Cat costructor called\n";
}

Cat &Cat::operator=(const Cat &cat) {
	type = cat.type;
	return *this;
}

Cat::Cat(const Cat &cat)
{
	*this = cat;
}

Cat::~Cat (){
	std::cout << "Cat destructor called\n";

}

void	Cat::makeSound() const
{
	std::cout << "Meow Meow\n";
}