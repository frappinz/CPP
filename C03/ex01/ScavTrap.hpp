#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string Name);
		ScavTrap(const ScavTrap &scav);
		virtual ~ScavTrap();
		ScavTrap& operator= (const ScavTrap &scav);
		~ScavTrap();
		void	attack(std::string const &target);
		void guardGate();
	private:
		bool gatekeeper;
}

#endif