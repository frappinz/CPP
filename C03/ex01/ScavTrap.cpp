/* If D publicly inherited from B, then a D could be cast to a B, 
and this function call would be fine.

The second difference is that all the protected and 
public members in B become private members in D.

What does this actually mean? Public inheritance means D IS_A B, 
but private inheritance means "is implemented in terms of". 
Inheriting D from B means you want to take advantage of some of 
the features in B, but not because D IS_A B or because there's 
any conceptual connection between B and D. :D */
/* 
When creating a class, instead of writing completely new data members 
and member functions, the programmer can designate that the new class 
should inherit the members of an existing class. This existing class is 
called the base class, and the new class is referred to as the derived class.

The idea of inheritance implements the is a relationship. 
For example, mammal IS-A animal, dog IS-A mammal hence dog IS-A animal as well and so on. */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {}

ScavTrap& ScavTrap::operator = (const ScavTrap& scav)
{
	Name = scav.Name;
	Hitpoints = scav.Hitpoints;
	EnergyPoints = scav.EnergyPoints;
	AttackDamage = scav.AttackDamage;
	return *this;
}
ScavTrap::ScavTrap(std::string Name) : ClapTrap(name)
{
	
}

ScavTrap& ScavTrap::operator= (const ScavTrap &scav)
{
	Name = scav.Name;
	Hitpoints = scav.Hitpoints;
	AttackDamage = scav.AttackDamage;
	EnergyPoints = scav.EnergyPoints;
	//trapType = scav.trapType;
	return *this;
}