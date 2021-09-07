/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fminardi <fminardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 17:36:02 by fminardi          #+#    #+#             */
/*   Updated: 2021/09/07 17:36:03 by fminardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
class Ice : public AMateria
{
	public:
		Ice();
		~Ice();
		Ice(const Ice &ice);
		Ice& operator=(const Ice &ice);
		Ice* clone() const;
		void use(ICharacter& target);

};

#endif


