/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fminardi <fminardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 12:22:02 by fminardi          #+#    #+#             */
/*   Updated: 2021/09/02 13:07:30 by fminardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap() {}

DiamondTrap::DiamondTrap(const std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	this->Name = name;
	this->setHitPoint(FragTrap::getHitPoint());
	this->setEnergyPoints(ScavTrap::getEnergyPoints());
	this->setAttackDamage(FragTrap::getAttackDamage());
	std::cout << "\033[0;36mDiamondTrap [" + name + "]\033[0;37m entered the game\n";
}

DiamondTrap& DiamondTrap::operator = (const DiamondTrap& diamond)
{
	this->setName(diamond.getName());
	setHitPoint(diamond.getHitPoint());
	setEnergyPoints(diamond.getEnergyPoints());
	setAttackDamage(diamond.getAttackDamage());
	return *this;
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "\033[0;36mDiamondTrap [" + Name + "]\033[0;37m lost the game\n";
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "\033[1;37mHI! my Name is " << this->Name << "?\nMy claptrap name is " << ClapTrap::Name << "\033[0;37m" << std::endl;
}