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
