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
	DiamondTrap what("What");
	int i = 0;

	while (ugo.alive && genoveffa.alive && mariottide.alive)
	{ 
		mariottide.guardGate();
		genoveffa.attack("Ugo");
		ugo.takeDamage(genoveffa.getAttackDamage());
		if(i != 0)
			genoveffa.beRepaired(20);
		ugo.attack("Mariottide");
		mariottide.takeDamage(ugo.getAttackDamage());
		ugo.beRepaired(100);
		what.whoAmI();
		mariottide.attack("What");
		what.takeDamage(mariottide.getAttackDamage());
		mariottide.beRepaired(20);
		ugo.highFivesGuys();
		mariottide.guardGate();
		what.attack("Genoveffa");
		genoveffa.takeDamage(what.getAttackDamage());
		what.beRepaired(20);
		what.highFivesGuys();
		i++;
	}
	std::cout << "\033[41mTHE GAME\033[0;37m finished.\n\n";
}