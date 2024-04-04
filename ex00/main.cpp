#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat Hannah("Hannah", 0);
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
		Bureaucrat Erik("Erik", 151);
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
		Bureaucrat Bob;
		Bob.increaseGrade();
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
		Bureaucrat Ariel("Ariel", 150);
		Ariel.decreaseGrade();
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
		Bureaucrat Liam("Liam", 23);

		std::cout << Liam;
		Liam.decreaseGrade();
		std::cout << Liam;
		Liam.increaseGrade();
		std::cout << Liam;
	}
	catch(Bureaucrat::TOOHIGHException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch(Bureaucrat::TOOLOWException &e)
	{
		std::cout << e.what() << std::endl;
	}
}