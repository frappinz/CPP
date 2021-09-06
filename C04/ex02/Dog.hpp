#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain* brain;
	public:
		Dog();
		~Dog();
		Dog &operator=(const Dog &dog);
		Dog(const Dog &dog);
		void makeSound() const;
		void setIdea(const std::string &idea);
		std::string getIdea() const;
};
#endif