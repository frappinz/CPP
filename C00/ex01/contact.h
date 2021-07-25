#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include <stdlib.h>
# include <stdio.h>
# include <cstring>

class	Contact
{
	public:

		void	setQualcosa(int i);
		std::string	getQualcosa(std::string needed);

	private:
		std::string name;
		std::string lastName;
		std::string phoneNumber;
		std::string darkestSecret;
		std::string nickname;
		int 		index;
	
};

#endif