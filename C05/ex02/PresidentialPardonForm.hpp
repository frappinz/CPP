/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fminardi <fminardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 13:22:41 by fminardi          #+#    #+#             */
/*   Updated: 2021/09/14 13:22:41 by fminardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PresidentialPardonForm_hpp
#define PresidentialPardonForm_hpp

#include "Form.hpp"
#include <iostream>

class PresidentialPardonForm : public Form
{
	private:
		std::string Target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm &sh);
		PresidentialPardonForm &operator = (const PresidentialPardonForm &sh);
		~PresidentialPardonForm();
		void execute(Bureaucrat const & executor) const;
};

#endif