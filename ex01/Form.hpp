#ifndef FORM_HPP
# define FORM_HPP
# include "Bureaucrat.hpp"
# include <string>
# include <iostream>

class Bureaucrat;

class Form
{
private:
	const std::string _name;
	bool _state;
	const int _signGrade;
	const int _executeGrade;
public:
	Form(void);
	Form(std::string name, int s, int e);
	Form(Form const& src);
	~Form(void);
	Form& operator=(Form const& rhs);
	const std::string getName(void) const;
	bool getState(void) const;
	int getSignGrade(void) const;
	int getExecuteGrade(void) const;
	void beSigned(const Bureaucrat &b);
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
};

std::ostream&	operator<<(std::ostream &out, const Form & b);

#endif