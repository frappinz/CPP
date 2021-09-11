#ifndef RobotomyRequestForm_hpp
#define RobotomyRequestForm_hpp

#include "Form.hpp"
#include "Bureaucrat.hpp"


class RobotomyRequestForm : public Form
{
	private:
		std::string Target;
	public:
		RobotomyRequestForm(std::string target);
		~RobotomyRequestForm();
		void execute(Bureaucrat const & executor) const;
};

#endif