#include "Zombie.hpp"

int main ()
{
	Zombie *zombie;
	
	zombie = newZombie("Cuoricino83");
	zombie->announce();

	randomChump("Gennarino");
	delete(zombie);
}