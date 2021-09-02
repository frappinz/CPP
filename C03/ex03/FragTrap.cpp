/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fminardi <fminardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 12:18:10 by fminardi          #+#    #+#             */
/*   Updated: 2021/09/02 13:00:57 by fminardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {}

FragTrap::FragTrap(std::string name) : ClapTrap(name) 
{
	setEnergyPoints(100);
	setHitPoint(100);
	setAttackDamage(30);
	std::cout << "\033[0;34mFragTrap [" + getName() + "] \033[0;37mentered the game\n";
}

FragTrap FragTrap::operator = (const FragTrap &frag)
{
	this->setName(frag.getName());
	setHitPoint(frag.getHitPoint());
	setEnergyPoints(frag.getEnergyPoints());
	setAttackDamage(frag.getAttackDamage());
	return *this;
}

void	FragTrap::attack(std::string const &target)
{
	this->setAttackDamage(getAttackDamage() + 2);
	std::cout << "\033[0;34mFragTrap [" + this->getName() + "]" << "\033[0;37m tried to kill [" << target << "], causing " << this->getAttackDamage() << " points of damage!\n";
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "\033[0;33mFragTrap [" + this->getName() + "]: \"GIMME AN HIGH FIVE!!\"\033[0;37m" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "\033[0;34mFragTrap [" + getName() + "] \033[0;37mlost the game\n";
}