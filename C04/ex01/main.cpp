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
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const Animal *animalini[2];
	Cat copiato;
	
	animalini[0] = new Dog();
	animalini[1] = new Cat();
	copiato.setIdea("Miaooo");
	Cat gatto(copiato);
	std::cout << "\nDimostrazione deep copy:\n";
	std::cout << "Idea gatto originale: " << copiato.getIdea() << std::endl;
	std::cout << "Idea gatto copiato: " << gatto.getIdea() << std::endl;

	gatto.setIdea("MEOW\n");
	std::cout << "\nCambiando idea al gatto copiato: \n";
	std::cout << "Idea gatto originale: " << copiato.getIdea() << std::endl;
	std::cout << "Idea gatto copiato: " << gatto.getIdea() << std::endl << std::endl;
	delete animalini[0];
	delete animalini[1];
	delete j;
	delete i;
}
