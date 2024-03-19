#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat(void) : _name("Bob the magnificient"), _grade(1) 
{
		std::cout << this->getName() << " begin his day" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) 
{
	if (grade > 150)
		throw Bureaucrat::TOOLOWException();
	else if (grade < 1)
		throw Bureaucrat::TOOHIGHException();
	std::cout << this->getName() << " begin his day" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const& src)
{
	*this = src;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const& rhs)
{
	if (this != &rhs)
	{
		//this->_name = rhs._name; les nom sont const 
		this->_grade = rhs._grade;
	}
	return *this;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << this->getName() << " return home" << std::endl;
}

const std::string	&Bureaucrat::getName(void) const
{
	return(this->_name);
}

int			Bureaucrat::getGrade(void) const
{
	return(this->_grade);
}

void		Bureaucrat::decreaseGrade(void)
{
	//verifier si 150
		if (this->_grade == 150)
			throw Bureaucrat::TOOLOWException();
		else
			this->_grade++;
}

void		Bureaucrat::increaseGrade(void)
{
	//verifier si 1

		if (this->_grade == 1)
			throw Bureaucrat::TOOHIGHException();
		else
			this->_grade--;
}

const char*  Bureaucrat::TOOHIGHException::what() const throw()
{
	return("Bureaucrat::GradeTooHighException");
}

const char* Bureaucrat::TOOLOWException::what() const throw()
{
	return("Bureaucrat::GradeTooLowException");
}

std::ostream&	operator<<(std::ostream &out, const Bureaucrat & b)
{
	out << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl;
	return(out);
}

void Bureaucrat::signForm(AForm &f)
{
	try
	{
		f.beSigned(*this);
	}
	catch(Bureaucrat::TOOLOWException &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(AForm const &form) const
{
	try
	{
		form.beExecute(*this);
	}
	catch(Bureaucrat::TOOLOWException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch(AForm::NotSignedException &e)
	{
		std::cout << e.what() << std::endl;
	}
}
