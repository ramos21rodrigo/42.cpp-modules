#include "Intern.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

Intern::Intern()
{
	std::cout << "\e[0;33mDefault Constructor called of Intern\e[0m" << std::endl;
}

Intern::Intern(const Intern &copy)
{
	*this = copy;
	std::cout << "\e[0;33mCopy Constructor called of Intern\e[0m" << std::endl;
}

Intern::~Intern()
{
	std::cout << "\e[0;31mDestructor called of Intern\e[0m" << std::endl;
}

Intern & Intern::operator=(const Intern &assign)
{
	if (this == &assign) return *this;
	return *this;
}

AForm *Intern::makeForm(string name, string target)
{
	AForm *new_form = NULL;

	t_forms forms[3] = {
		{ "shrubbery creation", new ShrubberyCreationForm(target) },
		{ "robotomy request", new RobotomyRequestForm(target) },
		{ "presidential pardon", new PresidentialPardonForm(target) }
	};

	for (int i = 0; i < 3; i++) 
	{
		if (forms[i].name == name) new_form = forms[i].formClass;
		else delete forms[i].formClass;
	}

	if (!new_form) cout << "Intern was not able to find the form " << name << endl;
	else cout << "Intern creates form " << name << endl;
	
	return (new_form);
}