# ifndef _HUMANA_CPP
#define _HUMANA_CPP

#include "Weapon.hpp"

class HumanA
{
	private:
		std::string name;
		Weapon	&weapon;
	public:
		HumanA(std::string name, Weapon& weapon);
			~HumanA();
		void	attack(void);
};


#endif