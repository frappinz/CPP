#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream> 
# include <iomanip>
# include <string>
# include "Contact.hpp"


class PhoneBook
{
private:
	Contact	contact[8];
	int		i;
public:
	void	adding(int j);
	void	searching();
};

#endif