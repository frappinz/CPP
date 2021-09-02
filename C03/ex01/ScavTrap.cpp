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

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {}

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
	setEnergyPoints(50);
	setHitPoint(100);
	setAttackDamage(20);
	std::cout << "\033[0;35mScavTrap [" + getName() + "]\033[0;37m has been created\n";
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
	std::cout << "\033[0;35mScavTrap [" + this->getName() + "]" << " \033[0;37m ATTACKS!!!! he attacked [" << target << "], causing " << this->getAttackDamage() << " points of damage!\n";
}

ScavTrap::~ScavTrap()
{
	std::cout << "\033[0;35mScavTrap [" + getName() + "] \033[0;37m has lost the game\n";
}
