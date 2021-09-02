#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	WrongCat::type = "WrongCat";
	std::cout << "WrongCat costructor called\n";
}

WrongCat::~WrongCat (){
}

WrongCat::WrongCat(const WrongCat &wc)
{
	*this = wc;
}

void	WrongCat::makeSound() const
{
	std::cout << "This will never be in the output :)\n";
}

WrongCat& WrongCat::operator= (const WrongCat& assign)
{
	type = assign.type;
	return *this;
}