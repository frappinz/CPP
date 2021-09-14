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