#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>

class	Contact
{
	public:
		Contact(){
		}
		std::string name;
		std::string lastName;
		std::string phoneNumber;
		std::string darkestSecret;
		std::string nickname;

	private:
	void	Adding();
	
}



#endif