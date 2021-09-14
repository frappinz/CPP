/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fminardi <fminardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 13:23:13 by fminardi          #+#    #+#             */
/*   Updated: 2021/09/14 13:23:14 by fminardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(){}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137)
{
	this->Target = target;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (!this->getSign())
		throw(Form::FormNotSignedException());
	if (executor.getGrade() <= this->getGrade_to_execute()) 
	{
		std::ofstream fileout(Target + "_shrubbery");
		fileout <<
"		                    🌞                          .\n"
"                                   .         ;  \n"
"      .              .              ;%     ;;   \n"
"        ,           ,                :;%  %;   \n"
"         :         ;                   :;%;'     .,   \n"
",.        %;     %;            ;        %;'    ,;\n"
"  ;       ;%;  %%;        ,     %;    ;%;    ,%'\n"
"   %;       %;%;      ,  ;       %;  ;%;   ,%;' \n"
"    ;%;      %;        ;%;        % ;%;  ,%;'\n"
"     `%;.     ;%;     %;'         `;%%;.%;'\n"
"      `:;%.    ;%%. %@;        %; ;@%;%'\n"
"         `:%;.  :;bd%;          %;@%;'\n"
"           `@%:.  :;%.         ;@@%;'   \n"
"             `@%.  `;@%.      ;@@%;      \n"   
"               `@%%. `@%%    ;@@%;        \n"
"                 ;@%. :@%%  %@@%;       \n"
"                   %@bd%%%bd%%:;     \n"
"                     #@%%%%%:;;\n"
"                     %@@%%%::;\n"
"                     %@@@%(o);  . '         \n"
"                     %@@@o%;:(.,'         \n"
"                 `.. %@@@o%::;         \n"
"                    `)@@@o%::;         \n"
"                     %@@(o)::;        \n"
"                    .%@@@@%::;         \n"
"                    ;%@@@@%::;.          \n"
"                   ;%@@@@%%:;;;. \n"
"               ...;%@@@@@%%:;;;;,..   \n";
	}
	else
	{
		throw(Bureaucrat::GradeTooLowException());
	}
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &sh)
{
	*this = sh;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator = (const ShrubberyCreationForm &sh)
{
	Target = sh.Target;
	return *this;
}
ShrubberyCreationForm::~ShrubberyCreationForm(){}
