#ifndef CURE_HPP
#define CURE_HPP


#include "AMateria.hpp"

class Cure : public AMateria
{
private:
	std::string type = "cure";
public:
	Cure(/* args */);
	~Cure();
};

#endif