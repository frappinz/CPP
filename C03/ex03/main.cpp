/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fminardi <fminardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 15:31:26 by fminardi          #+#    #+#             */
/*   Updated: 2021/08/30 15:31:26 by fminardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	ClapTrap genoveffa("Genoveffa");
	FragTrap ugo("Ugo");
	ScavTrap mariottide("Mariottide");
	DiamondTrap shady("What?");
	int i = 0;

	while (ugo.alive && genoveffa.alive && mariottide.alive)
	{ 
		mariottide.guardGate();
		ugo.attack("Genoveffa");
		genoveffa.takeDamage(ugo.getAttackDamage());
		if(i != 0)
			ugo.beRepaired(20);
		genoveffa.attack("Mariottide");
		mariottide.takeDamage(genoveffa.getAttackDamage());
		genoveffa.beRepaired(20);
		shady.whoAmI();
		mariottide.attack("Ugo");
		ugo.takeDamage(mariottide.getAttackDamage());
		mariottide.beRepaired(20);
		ugo.highFivesGuys();
		mariottide.guardGate();
		i++;
	}
	std::cout << "\033[0;36mTHE GAME\033[0;37m finished.\n";
}