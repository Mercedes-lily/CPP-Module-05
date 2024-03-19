#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <string>
#include <iostream>
# include "AForm.hpp"

class AForm;

class Bureaucrat
{
private:
	const std::string	_name;
	int					_grade;
public:
	Bureaucrat(void);
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const& src);
	~Bureaucrat(void);
	Bureaucrat&	operator=(Bureaucrat const& rhs);
	const std::string	&getName(void) const;
	int			getGrade(void) const;
	void		decreaseGrade(void);
	void		increaseGrade(void);
	class TOOHIGHException : public std::exception
	{
		public:
			const char* what() const throw();
	};
	class TOOLOWException : public std::exception
	{
		public:
			const char* what() const throw();
	};
	void signForm(AForm &f);
	void executeForm(AForm const & form) const;
};

std::ostream&	operator<<(std::ostream &out, const Bureaucrat & b);

# endif