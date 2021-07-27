# ifndef _HUMANB_CPP
#define _HUMANB_CPP

#include "Weapon.hpp"

class HumanB
{
	private:
		std::string name;
		Weapon	*weapon;
	public:
		HumanB(std::string name);
		void	attack(void);
		void	setWeapon(Weapon &weapon);
};


#endif