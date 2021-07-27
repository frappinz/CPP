#include "Zombie.hpp"

int main()
{
	Zombie *zombie;
	int i;

	zombie = zombieHorde(4, "Stellina198");
	for (i = 0; i < 4; i++)
		zombie[i].announce();
	delete [] zombie;
}