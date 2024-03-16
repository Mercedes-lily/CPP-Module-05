#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Aform("Presidential Pardon", 25, 5, "target")
{
	std::cout << "Presidential Pardon Form is print" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Aform("Presidential Pardon", 25, 5, target)
{
	std::cout << "Presidential Pardon Form is print" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& src) Aform("Presidential Pardon", 25, 5, src.getTarget())
{
	*this = src;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const& rhs)
{
	if (this != &rhs)
	{
		this->_target = rhs.getTarget()
	}
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "Presidential Pardon Form is destroy" << std::endl;
}

void PresidentialPardonForm::execute(const Bureaucrat &b) const
{ 
	std::cout << this->_target<< " receives presidential pardon from Zaphod Beeblebrox" << std::endl;
}

# endif