#include "ClapTrap.hpp"

int main()
{
	ClapTrap ugo("Ugo");
	ClapTrap genoveffa("Genoveffa");
	ClapTrap mariottide("Mariottide");
	int i = 0;

	while (ugo.alive && genoveffa.alive && mariottide.alive)
	{
		ugo.attack("Genoveffa");
		genoveffa.takeDamage(ugo.getDamage());
		if(i != 0)
			ugo.beRepaired(1);
		genoveffa.attack("Mariottide");
		mariottide.takeDamage(genoveffa.getDamage());
		genoveffa.beRepaired(1);
		mariottide.attack("Ugo");
		ugo.takeDamage(mariottide.getDamage());
		mariottide.beRepaired(1);
		i++;
	}
	std::cout << "\033[0;36mTHE GAME\033[0;37m finished.\n";
}