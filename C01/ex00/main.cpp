/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fminardi <fminardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 17:52:52 by fminardi          #+#    #+#             */
/*   Updated: 2021/08/26 17:52:52 by fminardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main ()
{
	Zombie *zombie;
	
	zombie = newZombie("Cuoricino83");
	zombie->announce();

	randomChump("Gennarino");
	delete(zombie);
}