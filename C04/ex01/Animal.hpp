#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <cstring>

class	Animal
{
	protected:
		std::string type;
	public:
		Animal();
		virtual ~Animal();
		Animal (const Animal& animal);
		Animal& operator= (const Animal& assign);
		std::string getType() const;
		virtual void	makeSound() const;
		virtual std::string		getIdea() const = 0;
		virtual void			setIdea(const std::string idea) = 0;
};

#endif