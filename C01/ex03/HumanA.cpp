/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fminardi <fminardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 11:56:03 by fminardi          #+#    #+#             */
/*   Updated: 2021/08/28 11:56:03 by fminardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : weapon(weapon)
{
	this->name = name;
	this->weapon = weapon;
}

void	HumanA::attack(void)
{
	std::cout << name << " attacks with his " << weapon.getType() << std::endl;
}


HumanA::~HumanA()
{
}
