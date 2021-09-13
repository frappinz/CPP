#include "ShrubberyCreationForm.hpp"

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
		//std::cout << executor.getName() << " executes " << this->getName() << std::endl;
	}
	else
	{
		throw(Bureaucrat::GradeTooLowException());
	}
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}
