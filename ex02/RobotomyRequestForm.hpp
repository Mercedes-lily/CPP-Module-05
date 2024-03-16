#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
private:
	RobotomyRequestForm(void);
public:
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm const& src);
	~RobotomyRequestForm(void);
	RobotomyRequestForm& operator=(RobotomyRequestForm const& rhs);
	void execute(const Bureaucrat &b) const;
};

RobotomyRequestForm::RobotomyRequestForm(void)  : Aform("RobotomyRequest", 72, 45, "target")
{
	std::cout << "Robotomy Request Form is print" << std::endl;
}

RobotomyRequestForm(std::string target)  : Aform("RobotomyRequest", 72, 45, target)
{
		std::cout << "Robotomy Request Form is print" << std::endl;		
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& src)   : Aform("RobotomyRequest", 72, 45, src.getTarget())
{
	*this = src;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const& rhs)
{
	if (this != &rhs)
	{
		this._target = rhs.getTarget();
	}
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	int number = rand() % 2;
	std::cout << "Vzzziiiiiiiiiiiiiiiiiiiiiiiii" << std::endl;
	if(number = 0)
		std::cout  <<  "Your robotomy is successful. Congratulation" << std::endl;
	else
		std::cout  <<  "Your robotomy is not successful. Better luck next time" << std::endl;
}

#endif