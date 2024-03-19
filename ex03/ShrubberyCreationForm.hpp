#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"

class  ShrubberyCreationForm : public AForm
{
private:
	ShrubberyCreationForm(void);
public:
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm( ShrubberyCreationForm const& src);
	~ShrubberyCreationForm(void);
	ShrubberyCreationForm& operator=( ShrubberyCreationForm const& rhs);
	void execute(void) const;
};

#endif