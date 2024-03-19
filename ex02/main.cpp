#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	AForm *Robotomy = new RobotomyRequestForm("You");
	AForm *Presidential = new PresidentialPardonForm("Ermenegilde");
	AForm *Shruberry = new ShrubberyCreationForm("myHouse");
	AForm *Robotomy2 = new RobotomyRequestForm("Bob");
	AForm *Presidential2 = new PresidentialPardonForm("Bob");
	AForm *Shru2 = new ShrubberyCreationForm("myHouse");
	Bureaucrat Andre("Andre", 5);
	Bureaucrat Vincent("Vincent", 25);
	Bureaucrat Felix("Felix", 72);
	Bureaucrat Sebastien("Sebastien", 145);
	try
	{
		Andre.signForm(*Robotomy);
		Andre.signForm(*Presidential);
		Andre.signForm(*Shruberry);
		Andre.executeForm(*Robotomy);
		Andre.executeForm(*Robotomy);
		Andre.executeForm(*Robotomy);
		Andre.executeForm(*Robotomy);
		Andre.executeForm(*Robotomy);
		Andre.executeForm(*Robotomy);
		Andre.executeForm(*Presidential);
		Andre.executeForm(*Shruberry);
		std::cout << std::endl;
	}
	catch(AForm::TOOHIGHException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch(AForm::TOOLOWException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch(Bureaucrat::TOOHIGHException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch(Bureaucrat::TOOLOWException &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Felix.signForm(*Robotomy2);
		Felix.executeForm(*Robotomy2);
		std::cout << std::endl;
	}
	catch(AForm::TOOHIGHException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch(AForm::TOOLOWException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch(Bureaucrat::TOOHIGHException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch(Bureaucrat::TOOLOWException &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Vincent.signForm(*Presidential2);
		Vincent.executeForm(*Presidential2);
		std::cout << std::endl;
	}
	catch(AForm::TOOHIGHException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch(AForm::TOOLOWException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch(Bureaucrat::TOOHIGHException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch(Bureaucrat::TOOLOWException &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Sebastien.signForm(*Shru2);
		Sebastien.executeForm(*Shru2);
		std::cout << std::endl;
	}
	catch(AForm::TOOHIGHException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch(AForm::TOOLOWException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch(Bureaucrat::TOOHIGHException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch(Bureaucrat::TOOLOWException &e)
	{
		std::cout << e.what() << std::endl;
	}
	delete Robotomy;
	delete Shruberry;
	delete Presidential;
	delete Robotomy2;
	delete Shru2;
	delete Presidential2;
}