#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class	FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap operator = (const FragTrap &frag);
		~FragTrap();
		void highFivesGuys(void);
};
#endif