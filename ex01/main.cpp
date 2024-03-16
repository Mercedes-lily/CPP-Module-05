#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	// main ex00
	// try
	// {
	// 	Bureaucrat Hannah("Hannah", 0);
	// }
	// catch(Bureaucrat::TOOHIGHException &e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	// catch(Bureaucrat::TOOLOWException &e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	// try
	// {
	// 	Bureaucrat Erik("Erik", 151);
	// }
	// catch(Bureaucrat::TOOHIGHException &e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	// catch(Bureaucrat::TOOLOWException &e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	// try
	// {
	// 	Bureaucrat Bob;
	// 	Bob.increaseGrade();
	// }
	// catch(Bureaucrat::TOOHIGHException &e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	// catch(Bureaucrat::TOOLOWException &e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	// try
	// {
	// 	Bureaucrat Ariel("Ariel", 150);
	// 	Ariel.decreaseGrade();
	// }
	// catch(Bureaucrat::TOOHIGHException &e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	// catch(Bureaucrat::TOOLOWException &e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	// try
	// {
	// 	Bureaucrat Liam("Liam", 23);

	// 	Liam.decreaseGrade();
	// 	std::cout << Liam;
	// 	Liam.increaseGrade();
	// 	std::cout << Liam;
	// }
	// catch(Bureaucrat::TOOHIGHException &e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	// catch(Bureaucrat::TOOLOWException &e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }

	// main ex01
	try
	{
		Form C203("C203", 151, 151);
	}
	catch(Form::TOOHIGHException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch(Form::TOOLOWException &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Form C204("C204", 0, 0);
	
	}
	catch(Form::TOOHIGHException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch(Form::TOOLOWException &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Form C205("C205", 1, 1);
		Form C206("C206", 150, 150);
		Form C207(C206);
		Form C208 = C205;
		Bureaucrat Liam("Liam", 1);

		std::cout << C205 << C206 << C207 << C208;
		Liam.signForm(C205);
		Liam.signForm(C206);
		Liam.signForm(C206);
	}
	catch(Form::TOOHIGHException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch(Form::TOOLOWException &e)
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
		Form C205("C205", 1, 1);
		Form C206("C206", 150, 1);
		Bureaucrat Ermenegilde("Ermenegilde", 150);
		Ermenegilde.signForm(C206);
		Ermenegilde.signForm(C205);
	}
	catch(Form::TOOHIGHException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch(Form::TOOLOWException &e)
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
}