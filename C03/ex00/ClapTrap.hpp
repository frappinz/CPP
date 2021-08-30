/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fminardi <fminardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 15:31:11 by fminardi          #+#    #+#             */
/*   Updated: 2021/08/30 15:31:11 by fminardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ClapTrap_hpp
#define ClapTrap_hpp

#include <iostream>
class ClapTrap
{
private:
	std::string Name;
	int Hitpoints;
	int EnergyPoints;
	int AttackDamage;
public:
	ClapTrap(std::string Name);
		~
	ClapTrap();
	int 	alive;
	void	attack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	int 	getDamage(void);
};

#endif