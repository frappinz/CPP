/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fminardi <fminardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 17:34:24 by fminardi          #+#    #+#             */
/*   Updated: 2021/09/07 17:34:25 by fminardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Brain_hpp
#define Brain_hpp

#include <iostream>
class Brain
{
	private:
	public:
		std::string ideas[100];
		Brain();
		Brain(const Brain &brain);
		Brain &operator = (const Brain &Brain);
		void	setIdea(const std::string &idea);
		std::string getIdea() const;
		~Brain();
};
#endif 