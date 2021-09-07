/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fminardi <fminardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 17:34:41 by fminardi          #+#    #+#             */
/*   Updated: 2021/09/07 17:34:42 by fminardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	WrongCat::type = "WrongCat";
	std::cout << "WrongCat costructor called\n";
}

WrongCat::~WrongCat (){
}

WrongCat::WrongCat(const WrongCat &wc)
{
	*this = wc;
}

void	WrongCat::makeSound() const
{
	std::cout << "This will never be in the output :)\n";
}

WrongCat& WrongCat::operator= (const WrongCat& assign)
{
	type = assign.type;
	return *this;
}