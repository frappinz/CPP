/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fminardi <fminardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 11:56:04 by fminardi          #+#    #+#             */
/*   Updated: 2021/08/28 11:56:04 by fminardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef _HUMANA_CPP
#define _HUMANA_CPP

#include "Weapon.hpp"

class HumanA
{
	private:
		std::string name;
		Weapon	&weapon;
	public:
		HumanA(std::string name, Weapon& weapon);
			~HumanA();
		void	attack(void);
};


#endif