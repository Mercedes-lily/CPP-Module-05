#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
	Bureaucrat Andre("Andre", 5);
	Intern newIntern;
	std::cout << std::endl;
	AForm *pres = newIntern.makeForm("presidential pardon", "Ermenegilde");
	std::cout << std::endl;
	AForm *rob = newIntern.makeForm("robotomy request", "Ermenegilde");
	std::cout << std::endl;
	AForm *shru = newIntern.makeForm("shrubbery creation", "Ermenegilde");
	std::cout << std::endl;
	AForm *other = newIntern.makeForm("other form", "Ermenegilde");
	std::cout << std::endl;
	(void) other;
	try
	{
		Andre.signForm(*rob);
		Andre.signForm(*pres);
		Andre.signForm(*shru);
		Andre.executeForm(*rob);
		Andre.executeForm(*rob);
		Andre.executeForm(*rob);
		Andre.executeForm(*rob);
		Andre.executeForm(*rob);
		Andre.executeForm(*pres);
		Andre.executeForm(*shru);
	}
	catch(AForm::TOOHIGHException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch(AForm::TOOLOWException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch(Bureaucrat::TOOHIGHException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch(Bureaucrat::TOOLOWException &e)
	{
		std::cout << e.what() << std::endl;
	}
	delete rob;
	delete shru;
	delete pres;
}