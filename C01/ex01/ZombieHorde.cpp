#include "Zombie.hpp"

std::string itoa(int i)
{
	char s[1];
	std::string num;
	s[0] = i+48;
	num.assign(s);
	return num;
}
Zombie* zombieHorde( int N, std::string name)
{
	Zombie *zombie = new Zombie[N];
	int i;

	for(i = 0; i < N; i++)
	{
		zombie[i].setName(name + itoa(i));
	}
	return zombie;

}