#ifndef AFORM_HPP
# define AFORM_HPP
# include "Bureaucrat.hpp"
# include <string>
# include <iostream>

class Bureaucrat;

class AForm
{
private:
	const std::string _name;
	bool _state;
	const int _signGrade;
	const int _executeGrade;
	std::string _target;
public:
	AForm(void);
	AForm(std::string name, int s, int e, std::string target);
	AForm(AForm const& src);
	virtual ~AForm(void) = 0;
	AForm& operator=(AForm const& rhs);
	const std::string getName(void) const;
	bool getState(void) const;
	int getSignGrade(void) const;
	int getExecuteGrade(void) const;
	std::string getTarget(void) const;
	void setTarget(std::string target);
	void beSigned(const Bureaucrat &b);
	void execute(const Bureaucrat &b) const;
	virtual void executeForm(void) const = 0;
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
	class NotSignedException : public std::exception
	{
		public:
			const char* what() const throw();
	};
};

std::ostream&	operator<<(std::ostream &out, const AForm & b);

#endif