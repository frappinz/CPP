/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fminardi <fminardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 17:33:56 by fminardi          #+#    #+#             */
/*   Updated: 2021/09/07 17:33:56 by fminardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
class Dog : public Animal
{
	public:
		Dog();
		~Dog();
		Dog &operator=(const Dog &dog);
		Dog(const Dog &dog);
		void makeSound() const;
};
#endif