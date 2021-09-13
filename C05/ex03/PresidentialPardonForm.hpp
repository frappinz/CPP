#ifndef PresidentialPardonForm_hpp
#define PresidentialPardonForm_hpp

#include "Form.hpp"
#include <iostream>

class PresidentialPardonForm : public Form
{
	private:
		std::string Target;

	public:
		PresidentialPardonForm(std::string target);
		~PresidentialPardonForm();
		void execute(Bureaucrat const & executor) const;

};

#endif