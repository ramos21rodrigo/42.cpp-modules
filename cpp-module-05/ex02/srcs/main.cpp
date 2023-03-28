#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	Bureaucrat zoze("Jose", 150);
	Bureaucrat jorge("Jorge the executer", 1);
	cout << endl;

	// AForm aform("a", "b", 0, 0);

	ShrubberyCreationForm monke("monke");
	PresidentialPardonForm apps("apps");
	RobotomyRequestForm primats("primats");

	zoze.executeForm(monke);
	zoze.signForm(monke);
	jorge.signForm(monke);
	zoze.executeForm(monke);

	cout << endl;

	jorge.signForm(monke);
	jorge.executeForm(monke);

	cout << endl;

	jorge.signForm(primats);
	jorge.executeForm(primats);
	jorge.executeForm(primats);

	cout << endl;

	jorge.signForm(apps);
	jorge.executeForm(apps);

	cout << endl;

	return 0;
}
