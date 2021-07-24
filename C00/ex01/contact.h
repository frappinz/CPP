#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include <stdlib.h>

class	Contact
{
	public:

		void	setQualcosa(Contact contact, int i);
		std::string	getQualcosa(Contact contact, int i);

	private:
		std::string name;
		std::string lastName;
		std::string phoneNumber;
		std::string darkestSecret;
		std::string nickname;
		int 		index;
	
};

#endif