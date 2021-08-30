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
	ClapTrap();
	ClapTrap(std::string Name);
		~
	ClapTrap();
	ClapTrap operator = (const ClapTrap &clap);
	int 	alive;
	void	attack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	setName(std::string name);
	std::string getName(void);
	void	setHitPoint(int hit);
	int		getHitPoint();
	void	setEnergyPoints(int energy);
	int		getEnergyPoints();
	void	setAttackDamage(int att);
	int		getAttackDamage();

};

#endif