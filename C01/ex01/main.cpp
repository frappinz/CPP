/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fminardi <fminardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 18:14:27 by fminardi          #+#    #+#             */
/*   Updated: 2021/08/26 18:14:27 by fminardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *zombie;
	int i;

	zombie = zombieHorde(4, "Stellina198");
	for (i = 0; i < 4; i++)
		zombie[i].announce();
	delete [] zombie;
}