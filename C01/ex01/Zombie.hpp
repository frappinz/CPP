#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP


# include <iostream>
# include <string>
# include <stdlib.h>
# include <stdio.h>
# include <iomanip>


class Zombie
{
private:
	std::string name;
public:
	Zombie();
	~Zombie();
	void	announce();
	void	setName(std::string str);
};

Zombie* zombieHorde( int N, std::string name);

#endif