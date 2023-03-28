#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	Bureaucrat andre("Andre", 1);

	Intern *ebil = new Intern();
	AForm *form;

	cout << endl;

	form = ebil -> makeForm("ola", "Adeus");

	cout << endl;

	form = ebil -> makeForm("shrubbery creation", "monke");
	andre.signForm(*(ShrubberyCreationForm *)form);
	andre.executeForm(*(ShrubberyCreationForm *)form);

	cout << endl;

	delete ebil;
	delete form;

	return 0;
}
