/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fminardi <fminardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 18:14:21 by fminardi          #+#    #+#             */
/*   Updated: 2021/08/26 18:14:21 by fminardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <stdlib.h>
# include <stdio.h>
# include <iomanip>


class Zombie
{
private:
	std::string name;
public:
	Zombie();
	~Zombie();
	void	announce();
	void	setName(std::string str);
};

Zombie* zombieHorde( int N, std::string name);

#endif