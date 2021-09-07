/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fminardi <fminardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 17:34:39 by fminardi          #+#    #+#             */
/*   Updated: 2021/09/07 17:34:40 by fminardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream> 

class	WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal ();
		WrongAnimal(const WrongAnimal &wa);
		virtual ~WrongAnimal();
		WrongAnimal& operator= (const WrongAnimal & assign);
		std::string getType() const;
		void	makeSound() const;
};
#endif