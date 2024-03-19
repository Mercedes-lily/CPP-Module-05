#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"

class Intern
{
private:
public:
	Intern(void);
	Intern(Intern const& src);
	~Intern(void);
	Intern& operator=(Intern const& rhs);
	AForm *makeForm(std::string formName, std::string target);
};

Intern::Intern(void)
{
	std::cout << "Intern created"<< std::endl;
}

Intern::Intern(Intern const& src)
{
	*this = src;
}

Intern& Intern::operator=(Intern const& rhs)
{
	(void) rhs;
	return *this;
}

Intern::~Intern(void)
{
	std::cout << "Intern return home"<< std::endl;
}

AForm *Intern::makeForm(std::string formName, std::string target)
{
	std::string form[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
	int i = 0;
	AForm *newform;

	while(form[i] != formName)
		i++;
	switch(i) 
	{
		case(0):
		{
			newform = new RobotomyRequestForm(target);
			std::cout << "Intern creates " << form[i] << std::endl;
			break;
		}
		case(1):
		{
			newform = new PresidentialPardonForm(target);
			std::cout << "Intern creates " << form[i] << std::endl;
			break;
		}
		case(2):
		{
			newform = new ShrubberyCreationForm(target);
			std::cout << "Intern creates " << form[i] << std::endl;
			break;
		}
		default:
		{
			newform = NULL;
			std::cerr << "Intern can't creates " << formName << std::endl;
		}
	}
	return(newform);
}