#include "AForm.hpp"

AForm::AForm(void) : _name("Stupid"), _state(0), _signGrade(42), _executeGrade(42), _target("target")
{
	std::cout << this->_name << " is print" << std::endl;
}

AForm::AForm(std::string name, int s, int e, std::string target) : _name(name), _state(0), _signGrade(s), _executeGrade(e), _target(target)
{
	if (s > 150 || e > 150)
		throw AForm::TOOLOWException();
	else if (s < 1 || e < 1)
		throw AForm::TOOHIGHException();
	std::cout << name << "_AForm is print" << std::endl;
}

AForm::AForm(AForm const& src) : _name(src.getName()), _state(0), _signGrade(src.getSignGrade()), _executeGrade(src.getExecuteGrade()), _target(getTarget())
{
	*this = src;
}

AForm& AForm::operator=(AForm const& rhs)
{
	(void) rhs;
	return *this;
}

AForm::~AForm(void)
{
	std::cout << this->_name << "_AForm is destroy" << std::endl;
}

const std::string AForm::getName(void) const
{
	return(this->_name);
}
bool AForm::getState(void) const
{
	return(this->_state);
}
int AForm::getSignGrade(void) const
{
	return(this->_signGrade);
}
int AForm::getExecuteGrade(void) const
{
	return(this->_executeGrade);
}

std::string AForm::getTarget(void) const
{
	return(this->_target);
}

void AForm::setTarget(std::string target)
{
	this->_target = target;
}

void AForm::beSigned(const Bureaucrat &b)
{
	if (this->_state == 1)
		std::cout << this->_name << " already signed" << std::endl;
	else if(b.getGrade() > this->_signGrade)
		throw Bureaucrat::TOOLOWException();
	else
	{
		std::cout << this->_name << " signed by " << b.getName()<< std::endl;
		this->_state = 1;
	}
}

const char*  AForm::TOOHIGHException::what() const throw()
{
	return("AForm::GradeTooHighException");
}

const char* AForm::TOOLOWException::what() const throw()
{
	return("AForm::GradeTooLowException");
}

const char* AForm::NotSignedException::what() const throw()
{
	return("AForm::Impossible to execute an unsigned Aform.");
}

void AForm::execute(const Bureaucrat &b) const
{
	if (this->_state == 0)
		throw AForm::NotSignedException();
	if (b.getGrade() > this->_executeGrade)
		throw AForm::TOOLOWException();
	else
		this->executeForm();
}

std::ostream	&operator<<(std::ostream &out, const AForm & f)
{
	out << f.getName() << " Aform";
	out << " have a sign grade of " << f.getSignGrade();
	out << " and a execute grade of " << f.getExecuteGrade();
	if (f.getState() == 1)
		out << ". This Aform is signed"<< std::endl;
	else
		out << ". This Aform is not signed"<< std::endl;
	return(out);
}