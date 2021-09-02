/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fminardi <fminardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 15:31:21 by fminardi          #+#    #+#             */
/*   Updated: 2021/08/30 15:31:21 by fminardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){}

ClapTrap::ClapTrap(const std::string & nick)
{
	std::cout << "\033[0;32mClapTrap [" << nick << "] \033[0;37mentered the game\n";
	setName(nick);
	this->Hitpoints = 10;
	this->EnergyPoints = 10;
	this->AttackDamage = 0;
	this->alive = 1;
}

ClapTrap ClapTrap::operator=(const ClapTrap& clap)
{
	Name = clap.Name;
	Hitpoints = clap.Hitpoints;
	EnergyPoints = clap.EnergyPoints;
	AttackDamage = clap.AttackDamage;
	return *this;
}

void	ClapTrap::attack(std::string const & target)
{
	if (!this->alive)
		return;
	this->AttackDamage += 2;
	std::cout << "\033[0;32mClapTrap [" + this->Name + "]\033[0;37m" << " attack [" << target << "], causing " << this->AttackDamage << " points of damage!\n";

}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (!this->alive)
		return;
	this->EnergyPoints -= amount;
	if (this->EnergyPoints <= 0)
	{
		std::cout << "\033[0;31mClapTrap [" << this->Name << "] DIED!\033[0;37m\n";
		this->alive = 0;
		this->AttackDamage = 0;
		return;
	}
	std::cout << "\033[0;32mClapTrap [" + this->Name + "]\033[0;37m" << " has been attacked and has " << this->EnergyPoints << " points left!\n";

}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (!this->alive)
		return;
	this->EnergyPoints += amount;
	std::cout << "\033[0;32mClapTrap [" + this->Name + "]\033[0;37m" << " has been repaired of " << amount << " point and has still " << this->EnergyPoints << " points!\n";
	
}

void	ClapTrap::setName(const std::string name)
{
	this->Name = name;
}

std::string ClapTrap::getName(void) const
{
	return this->Name;
}

void	ClapTrap::setHitPoint(int hit)
{
	this->Hitpoints = hit;
}

int		ClapTrap::getHitPoint() const
{
	return this->Hitpoints;
}

void	ClapTrap::setEnergyPoints(int energy)
{
	this->EnergyPoints = energy;
}

int		ClapTrap::getEnergyPoints() const
{
	return this->EnergyPoints;
}

void	ClapTrap::setAttackDamage(int att)
{
	this->AttackDamage = att;
}

int	ClapTrap::getAttackDamage() const
{
	return this->AttackDamage;
}

ClapTrap::~ClapTrap()
{
	std::cout << "\033[0;32mClapTrap [" + this->Name + "] \033[0;37mlost the game.\n";
}