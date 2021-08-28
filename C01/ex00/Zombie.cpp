/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fminardi <fminardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 17:53:01 by fminardi          #+#    #+#             */
/*   Updated: 2021/08/26 17:53:01 by fminardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie::Zombie(std::string Name)
{
	this->name = Name;
}

Zombie::~Zombie()
{
	std::cout << name << " è stato ucciso da Rick\n";
}

void Zombie::announce(void)
{
	std::cout << "<" + name  + ">   Braiiiiiiinnnzzz. . .\n";
}