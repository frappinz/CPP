#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <cstring>

#include "Dog.hpp"
#include "Cat.hpp"
class	Animal
{
	protected:
		std::string type;
	public:
		Animal();
		~Animal();
		Animal (const Animal& animal);
		Animal& operator= (const Animal& assign);
		std::string getType();
		void	makeSound();
};

#endif