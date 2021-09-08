/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fminardi <fminardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 17:34:34 by fminardi          #+#    #+#             */
/*   Updated: 2021/09/07 17:34:34 by fminardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const Animal *animals[4];
	Cat copiato;
	
	for (int y = 0; y < 4; y++)
	{
		if (y % 2 == 0)
			animals[y] = new Dog();
		else
			animals[y] = new Cat();
	}
	copiato.setIdea("Miaooo");
	Cat gatto(copiato);
	std::cout << "\nDimostrazione deep copy:\n";
	std::cout << "Idea gatto originale: " << copiato.getIdea() << std::endl;
	std::cout << "Idea gatto copiato: " << gatto.getIdea() << std::endl;

	gatto.setIdea("MEOW\n");
	std::cout << "\nCambiando idea al gatto copiato: \n";
	std::cout << "Idea gatto originale: " << copiato.getIdea() << std::endl;
	std::cout << "Idea gatto copiato: " << gatto.getIdea() << std::endl;
	for (int y = 0; y < 4; y++)
		delete animals[y];
	delete j;
	delete i;
}
