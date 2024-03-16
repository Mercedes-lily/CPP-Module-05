#include <"ShruberyCreationForm.hpp"


 ShrubberyCreationForm:: ShrubberyCreationForm(void) : Aform("Shrubbery Creation", 145, 137, "target")
{
	std::cout << "Shrubbery Creation Form is print" << std::endl;
}

ShrubberyCreationForm(std::string target) : Aform("Shrubbery Creation", 145, 137, target)
{
	std::cout << "Shrubbery Creation Form is print" << std::endl;
}

 ShrubberyCreationForm:: ShrubberyCreationForm(ShrubberyCreationForm const& src) : Aform("Shrubbery Creation", 145, 137, src.getTarget())
{
	*this = src;
}

 ShrubberyCreationForm&  ShrubberyCreationForm::operator=( ShrubberyCreationForm const& rhs)
{
	if (this != &rhs)
	{
		this->target = rhs.target;
	}
	return *this;
}

ShrubberyCreationForm::~ ShrubberyCreationForm(void)
{
	std::cout << "Shrubbery Creation Form is destroy" << std::endl;
}

void ShrubberyCreationForm::execute(const Bureaucrat &b) const
{
	std::string file = this->target + "_shrubbery";
	std::fstream out(file);
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
}