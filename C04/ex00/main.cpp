/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fminardi <fminardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 17:34:01 by fminardi          #+#    #+#             */
/*   Updated: 2021/09/07 17:34:01 by fminardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	std::cout << "j is a: " << j->getType() << " " << std::endl;
	std::cout << "i is a: " << i->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	const WrongAnimal *wa = new WrongAnimal;
	const WrongAnimal *wc = new WrongCat;

	std::cout << "WA is " << wa->getType() << std::endl;
	std::cout << "WC is " << wc->getType() << std::endl;

	std::cout << "WrongCat: ";
	wc->makeSound();
	delete(meta);
	delete(i);
	delete(j);
	delete(wa);
	delete(wc);
}