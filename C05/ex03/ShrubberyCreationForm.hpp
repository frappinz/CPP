#ifndef ShrubberyCreationForm_hpp
#define ShrubberyCreationForm_hpp

#include "Form.hpp"
#include <iostream>

class ShrubberyCreationForm : public Form
{
	private:
		std::string Target;
	public:
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm();
		void execute(Bureaucrat const & executor) const;

};

#endif