#include "ShrubberyCreationForm.hpp"
#include <fstream>


 ShrubberyCreationForm:: ShrubberyCreationForm(void) : AForm("ShrubberyCreation", 145, 137, "target")
{
	std::cout << "Shrubbery Creation Form is print" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreation", 145, 137, target)
{
	std::cout << "Shrubbery Creation Form is print" << std::endl;
}

 ShrubberyCreationForm:: ShrubberyCreationForm(ShrubberyCreationForm const& src) : AForm("Shrubbery Creation", 145, 137, src.getTarget())
{
	*this = src;
}

 ShrubberyCreationForm&  ShrubberyCreationForm::operator=( ShrubberyCreationForm const& rhs)
{
	if (this != &rhs)
	{
		this->setTarget(rhs.getTarget());
	}
	return *this;
}

ShrubberyCreationForm::~ ShrubberyCreationForm(void)
{
	std::cout << "Shrubbery Creation Form is destroy" << std::endl;
}

void ShrubberyCreationForm::executeForm(void) const
{
	std::string file = this->getTarget() + "_shrubbery";
	std::ofstream out(file);
	out << "											." << std::endl;              
	out << "									.         ;"  << std::endl;                
	out << "		.              .              ;%     ;;"  << std::endl;                 
	out << "		,           ,                :;%  %;"  << std::endl;                 
	out << "		:         ;                   :;%;'"  << std::endl;                 
	out << ";.,       %;     %;            ;        %;'    ,;"  << std::endl;              
	out << "	;       ;%;  %%;        ,     %;    ;%;    ,%'"  << std::endl;              
	out << "	%;       %;%;      ,  ;       %;  ;%;   ,%;'"  << std::endl;               
	out << "	;%;      %;        ;%;        % ;%;  ,%;'"  << std::endl;                
	out << "	`%;.     ;%;     %;'         `;%%;.%;'"  << std::endl;                   
	out << "		`:;%.    ;%%. %@;        %; ;@%;%'"  << std::endl;                  
	out << "		`:%;.  :;bd%;          %;@%;'"  << std::endl;                
	out << "			`@%:.  :;%.         ;@@%;'"  << std::endl;                 
	out << "			`@%.  `;@%.      ;@@%;"  << std::endl;                       
	out << "				`@%%. `@%%    ;@@%;"  << std::endl;                      
	out << "				;@%. :@%%  %@@%;"  << std::endl;                     
	out << "					%@bd%%%bd%%:;"  << std::endl;                   
	out << "					#@%%%%%:;;"  << std::endl;                             
	out << "					%@@%%%::;"  << std::endl;              
	out << "					%@@@%(o);  . '"  << std::endl;                       
	out << "					%@@@o%;:(.,'"  << std::endl;                       
	out << "				`.. %@@@o%::;"   << std::endl;                      
	out << "					`)@@@o%::;"  << std::endl;                                      
	out << "					%@@(o)::;"  << std::endl;                      
	out << "					.%@@@@%::;"   << std::endl;                                     
	out << "					;%@@@@%::;."  << std::endl;                                       
	out << "					;%@@@@%%:;;;."   << std::endl;                             
	out << "				...;%@@@@@%%:;;;;,.."  << std::endl;                               
	std::cout << "File created" << std::endl;
}