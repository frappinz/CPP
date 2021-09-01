#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap(const std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	this->Name = name;
	this->setHitPoint(FragTrap::getHitPoint());
	this->setEnergyPoints(ScavTrap::getEnergyPoints());
	this->setAttackDamage(FragTrap::getAttackDamage());
	std::cout << "\033[0;36m DiamondTrap [" + getName() + "] entered the game\033[0;37m\n";
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "\033[0;36mDiamondTrap [" + getName() + "] lost the game\033[0;37m\n";
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "\033[44mHI! my Name is " << this->Name << " but my claptrap name is " << ClapTrap::getName() << "\033[0;37m" << std::endl;
}