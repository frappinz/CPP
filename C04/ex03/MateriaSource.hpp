/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fminardi <fminardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 17:36:14 by fminardi          #+#    #+#             */
/*   Updated: 2021/09/07 17:36:15 by fminardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"
class MateriaSource : public IMateriaSource
{
	private:
		AMateria *inventario[4];
	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource(MateriaSource& source);
		MateriaSource& operator= (MateriaSource& source);
		void learnMateria(AMateria* materia);
		AMateria* createMateria(std::string const & type);
};

#endif