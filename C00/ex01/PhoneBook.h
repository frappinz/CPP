#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream> 
# include <iomanip>
# include "contact.h"


class PhoneBook
{
private:
	Contact	contact[9];
	int		i;
public:
	void	adding(int j);
	void	searching();
};

#endif