/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fminardi <fminardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 11:56:09 by fminardi          #+#    #+#             */
/*   Updated: 2021/08/28 11:56:09 by fminardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef _HUMANB_CPP
#define _HUMANB_CPP

#include "Weapon.hpp"

class HumanB
{
	private:
		std::string name;
		Weapon	*weapon;
	public:
		HumanB(std::string name);
			~HumanB();
		void	attack(void);
		void	setWeapon(Weapon &weapon);
};


#endif