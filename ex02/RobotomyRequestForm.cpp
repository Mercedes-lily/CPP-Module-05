#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void)  : AForm("RobotomyRequest", 72, 45, "target")
{
	std::cout << "Robotomy Request Form is print" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target)  : AForm("RobotomyRequest", 72, 45, target)
{
	std::cout << "Robotomy Request Form is print" << std::endl;		
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& src)   : AForm("RobotomyRequest", 72, 45, src.getTarget())
{
	*this = src;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const& rhs)
{
	if (this != &rhs)
		this->setTarget(rhs.getTarget());
	return *this;
}

void RobotomyRequestForm::executeForm(void) const
{
	static int i = 0;
	if(i == 0)
	{
		srand(time(NULL));
		i = 1;
	}
	int number = rand() % 2;
	std::cout << "Vzzziiiiiiiiiiiiiiiiiiiiiiiii" << std::endl;
	if(number == 0)
		std::cout  <<  "Robotomy for " << this->getTarget() << " is successful. Congratulation" << std::endl;
	else
		std::cout  <<  "Robotomy for " << this->getTarget() << " is not successful. Try again" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
		std::cout << "Robotomy Request Form Form is destroy" << std::endl;
}