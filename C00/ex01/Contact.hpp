/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fminardi <fminardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 12:00:04 by fminardi          #+#    #+#             */
/*   Updated: 2021/08/26 14:17:48 by fminardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include <stdlib.h>
# include <stdio.h>
# include <string>

class	Contact
{
	public:

		void	setContact(int i);
		std::string	getContact(std::string needed);

	private:
		std::string name;
		std::string lastName;
		std::string phoneNumber;
		std::string darkestSecret;
		std::string nickname;
		int 		index;
	
};

#endif