#ifndef WrongCat_hpp
#define WrongCat_hpp

#include "WrongAnimal.hpp"
class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(const WrongCat &wc);
		WrongCat& operator= (const WrongCat& assign);
		~WrongCat();
		void makeSound() const ;
};

#endif