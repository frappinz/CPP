/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fminardi <fminardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 13:23:15 by fminardi          #+#    #+#             */
/*   Updated: 2021/09/14 13:23:16 by fminardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ShrubberyCreationForm_hpp
#define ShrubberyCreationForm_hpp

#include "Form.hpp"
#include <iostream>

class ShrubberyCreationForm : public Form
{
	private:
		std::string Target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &sh);
		ShrubberyCreationForm &operator = (const ShrubberyCreationForm &sh);
		~ShrubberyCreationForm();
		void execute(Bureaucrat const & executor) const;

};

#endif