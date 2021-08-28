/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fminardi <fminardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 11:56:16 by fminardi          #+#    #+#             */
/*   Updated: 2021/08/28 11:56:16 by fminardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef _WEAPON_HPP
#define _WEAPON_HPP

# include <iostream>

class Weapon
{
	private:
		std::string	type;
	public:
		Weapon(std::string	type);
			~Weapon();
		const std::string& getType(void);
		void	setType(std::string	string);
};


#endif