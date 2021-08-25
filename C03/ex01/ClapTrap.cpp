#include "ClapTrap.hpp"


ClapTrap::ClapTrap(std::string Name)
{
	std::cout << Name << " has entered the game\n";
	this->Name = Name;
	this->Hitpoints = 10;	// ferite
	this->EnergyPoints = 10; // vita
	this->AttackDamage = 0;	// forza di attacco
	this->alive = 1;
}

void	ClapTrap::attack(std::string const & target)
{
	if (!this->alive)
		return;
	this->AttackDamage += 2;
	std::cout << "[" + this->Name + "]" << " attack [" << target << "], causing " << this->AttackDamage << " points of damage!\n";

}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (!this->alive)
		return;
	this->EnergyPoints -= amount;
	if (this->EnergyPoints <= 0)
	{
		std::cout << "\033[0;31m[" << this->Name << "] DIED!\033[0;37m\n";
		this->alive = 0;
		this->AttackDamage = 0;
		return;
	}
	std::cout << "[" + this->Name + "]" << " has been attacked and has " << this->EnergyPoints << " points left!\n";

}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (!this->alive)
		return;
	this->EnergyPoints += amount;
	std::cout << "[" + this->Name + "]" << " has been repaired of " << amount << " point and has still " << this->EnergyPoints << " points! \n";
	
}

int	ClapTrap::getDamage()
{
	return this->AttackDamage;
}

ClapTrap::~ClapTrap()
{
	std::cout << "[" + this->Name + "] lost the game.\n";
}