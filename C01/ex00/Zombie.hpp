#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
private:
	std::string name;
public:
	Zombie();
	~Zombie();
	void	announce(void);
	void	setName(std::string string);

};

Zombie* newZombie( std::string name );
void randomChump( std::string name );
#endif