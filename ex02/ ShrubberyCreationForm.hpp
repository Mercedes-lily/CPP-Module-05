#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <string>

class  ShrubberyCreationForm : public AForm
{
private:
	ShrubberyCreationForm(void);
public:
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm( ShrubberyCreationForm const& src);
	~ShrubberyCreationForm(void);
	ShrubberyCreationForm& operator=( ShrubberyCreationForm const& rhs);
	void execute(const Bureaucrat &b) const;
};

#endif