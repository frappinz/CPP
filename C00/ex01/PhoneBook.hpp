/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fminardi <fminardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 12:00:13 by fminardi          #+#    #+#             */
/*   Updated: 2021/08/26 12:00:14 by fminardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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