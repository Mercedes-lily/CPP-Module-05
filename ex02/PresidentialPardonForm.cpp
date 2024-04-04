#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("Presidential Pardon", 25, 5, "target")
{
	std::cout << "Presidential Pardon Form is print" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("Presidential Pardon", 25, 5, target)
{
	std::cout << "Presidential Pardon Form is print" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& src) : AForm("Presidential Pardon", 25, 5, src.getTarget())
{
	*this = src;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const& rhs)
{
	if (this != &rhs)
		this->setTarget(rhs.getTarget());
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "Presidential Pardon Form is destroy" << std::endl;
}

void PresidentialPardonForm::executeForm(void) const
{ 
	std::cout << this->getTarget()<< " receives presidential pardon from Zaphod Beeblebrox" << std::endl;
}
