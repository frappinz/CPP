# ifndef _WEAPON_HPP
#define _WEAPON_HPP

# include <iostream>

class Weapon
{
	private:
		std::string	type;
	public:
		Weapon(std::string	type);
		const std::string& getType(void);
		void	setType(std::string	string);
};


#endif