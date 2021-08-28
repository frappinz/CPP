/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fminardi <fminardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 18:14:25 by fminardi          #+#    #+#             */
/*   Updated: 2021/08/26 18:14:25 by fminardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::setName(std::string string)
{
	this->name = string;
}

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	std::cout << name << " è stato ucciso da Rick\n";
}

void Zombie::announce(void)
{
	std::cout << "<" + name  + ">   Braiiiiiiinnnzzz. . .\n";
}