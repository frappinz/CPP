/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fminardi <fminardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 15:31:28 by fminardi          #+#    #+#             */
/*   Updated: 2021/08/30 15:31:28 by fminardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* If D publicly inherited from B, then a D could be cast to a B, 
and this function call would be fine.

The second difference is that all the protected and 
public members in B become private members in D.

What does this actually mean? Public inheritance means D IS_A B, 
but private inheritance means "is implemented in terms of". 
Inheriting D from B means you want to take advantage of some of 
the features in B, but not because D IS_A B or because there's 
any conceptual connection between B and D. :D */
/* 
When creating a class, instead of writing completely new data members 
and member functions, the programmer can designate that the new class 
should inherit the members of an existing class. This existing class is 
called the base class, and the new class is referred to as the derived class.

The idea of inheritance implements the is a relationship. 
For example, mammal IS-A animal, dog IS-A mammal hence dog IS-A animal as well and so on. */

#include "ScavTrap.hpp"

ScavTrap& ScavTrap::operator = (const ScavTrap& scav)
{
	this->setName(scav.getName());
	setHitPoint(scav.getHitPoint());
	setEnergyPoints(scav.getEnergyPoints());
	setAttackDamage(scav.getAttackDamage());
	return *this;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) //costruttore
{
	//setName(name);
	setEnergyPoints(50);
	setHitPoint(100);
	setAttackDamage(20);
	std::cout << "\033[0;35mScavTrap [" + getName() + "] has been created\033[0;37m\n";
}

void ScavTrap::guardGate()
{
	if (gatekeeper == false)
		gatekeeper = true;
	else
		gatekeeper = false;
	if (gatekeeper)
		std::cout << "Gate keeper mode: ON" << std::endl;
	else
		std::cout << "Gate keeper mode: OFF" << std::endl;

}

void	ScavTrap::attack(std::string const &target)
{
	this->setAttackDamage(getAttackDamage() + 2);
	std::cout << "\033[0;35mScavTrap [" + this->getName() + "]" << " ATTACKS!!!! he attacked [" << target << "], causing " << this->getAttackDamage() << " points of damage!\033[0;37m\n";
}

ScavTrap::~ScavTrap()
{
	std::cout << "\033[0;35mScavTrap [" + getName() + "] has lost the game\033[0;37m\n";
}
