#include "Form.hpp"

Form::Form(void) : _name("Stupid"), _state(0), _signGrade(42), _executeGrade(42), _target("target")
{
	std::cout << this->_name << " is print" << std::endl;
}

Form::Form(std::string name, int s, int e, std::string target) : _name(name), _state(0), _signGrade(s), _executeGrade(e), _target(target)
{
	if (s > 150 || e > 150)
		throw Form::TOOLOWException();
	else if (s < 1 || e < 1)
		throw Form::TOOHIGHException();
	std::cout << name << " is print" << std::endl;
}

Form::Form(Form const& src) : _name(src.getName()), _state(0), _signGrade(src.getSignGrade()), _executeGrade(src.getExecuteGrade()) _target(getTarget())
{
	*this = src;
}

Form& Form::operator=(Form const& rhs)
{
	(void) rhs;
	return *this;
}

Form::~Form(void)
{
	std::cout << this->_name << " is destroy" << std::endl;
}

const std::string Form::getName(void) const
{
	return(this->_name);
}
bool Form::getState(void) const
{
	return(this->_state);
}
int Form::getSignGrade(void) const
{
	return(this->_signGrade);
}
int Form::getExecuteGrade(void) const
{
	return(this->_executeGrade);
}

std::string Form::getTarget(void) const
{
	return(this->_name);
}

void Form::beSigned(const Bureaucrat &b)
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

const char*  Form::TOOHIGHException::what() const throw()
{
	return("Form::GradeTooHighException");
}

const char* Form::TOOLOWException::what() const throw()
{
	return("Form::GradeTooLowException");
}

const char* Form::NotSignedException::what() const throw()
{
	return("Form::Impossible to execute an unsigned form.");
}

void Form::beExecute(const Bureaucrat &b)

std::ostream&	operator<<(std::ostream &out, const Form & f)
{
	out << f.getName() << " form";
	out << " have a sign grade of " << f.getSignGrade();
	out << " and a execute grade of " << f.getExecuteGrade();
	if (f.getState() == 1)
		out << ". This form is signed"<< std::endl;
	else
		out << ". This form is not signed"<< std::endl;
	return(out);
}