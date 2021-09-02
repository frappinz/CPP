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

int main()
{
	ClapTrap ugo("Ugo");
	ClapTrap genoveffa("Genoveffa");
	ScavTrap mariottide("Mariottide"); 
	int i = 0;

	while (ugo.alive && genoveffa.alive && mariottide.alive)
	{
		ugo.attack("Genoveffa");
		genoveffa.takeDamage(ugo.getAttackDamage());
		if(i != 0)
			ugo.beRepaired(20);
		mariottide.guardGate();
		genoveffa.attack("Mariottide");
		mariottide.takeDamage(genoveffa.getAttackDamage());
		genoveffa.beRepaired(20);
		mariottide.attack("Ugo");
		ugo.takeDamage(mariottide.getAttackDamage());
		mariottide.beRepaired(20);
		mariottide.guardGate();
		i++;
	}
	std::cout << "\033[41mTHE GAME\033[0;37m finished.\n\n";

}