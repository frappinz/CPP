#include "FragTrap.hpp"


//FragTrap::FragTrap() : ClapTrap() {}

FragTrap::FragTrap(std::string name) : ClapTrap(name) 
{
	//setName(name);
	setEnergyPoints(100);
	setHitPoint(100);
	setAttackDamage(30);
	std::cout << "\033[0;36mFragTrap [" + getName() + "] entered the game\033[0;37m\n";
}


FragTrap FragTrap::operator = (const FragTrap &frag)
{
	this->setName(frag.getName());
	setHitPoint(frag.getHitPoint());
	setEnergyPoints(frag.getEnergyPoints());
	setAttackDamage(frag.getAttackDamage());
	return *this;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "\033[0;33mFragTrap [" + this->getName() + "]: \"GIMME AN HIGH FIVE!!\"\033[0;37m" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "\033[0;36mFragTrap [" + getName() + "] flew away\033[0;37m\n";
}