#ifndef ClapTrap_hpp
#define ClapTrap_hpp

#include <iostream>
class ClapTrap
{
private:
	std::string Name;
	int Hitpoints;
	int EnergyPoints;
	int AttackDamage;
public:
	ClapTrap(std::string Name);
		~
	ClapTrap();
	int 	alive;
	void	attack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	int 	getDamage(void);
};

#endif