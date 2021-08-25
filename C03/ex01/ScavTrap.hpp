#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(std::string Name);
		~ScavTrap();
		void	attack(std::string const &target);
		void guardGate();
	private:

}

#endif