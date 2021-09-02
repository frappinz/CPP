/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fminardi <fminardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 15:31:23 by fminardi          #+#    #+#             */
/*   Updated: 2021/08/30 15:31:23 by fminardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ClapTrap_hpp
#define ClapTrap_hpp

#include <iostream>

class ClapTrap
{
	protected:
		std::string Name;
		int Hitpoints;
		int EnergyPoints;
		int AttackDamage;
	public:
		ClapTrap();
		ClapTrap(const std::string & nick);
		~ClapTrap();
		ClapTrap operator = (const ClapTrap &clap);
		int 	alive;
		void	attack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	setName(const std::string name);
		std::string getName(void) const;
		void	setHitPoint(int hit);
		int		getHitPoint() const;
		void	setEnergyPoints(int energy);
		int		getEnergyPoints() const;
		void	setAttackDamage(int att);
		int		getAttackDamage() const;
};

#endif