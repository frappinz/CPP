#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>

class	Contact
{
	public:

		void	setQualcosa(string);
		string	getQualcosa();

	private:
		std::string name;
		std::string lastName;
		std::string phoneNumber;
		std::string darkestSecret;
		std::string nickname;
	
}



#endif