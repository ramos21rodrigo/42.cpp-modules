#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat andre("Andre", 15);
	cout << endl;

	Form lowSign("Sign to low", -1, 1);
	Form lowExec("Exec to low", 1, -1);
	Form highSign("Sing to high", 151, 1);
	Form hignExec("Exec to high", 1, 1000);
	cout << endl;

	Form buroToLow("Buro to low", 12, 1);
	andre.signForm(buroToLow);
	cout << endl;

	Form signebleForm("Buro can sign this one!", 17, 1);
	andre.signForm(signebleForm);

	cout << endl;Form

	cout << signebleForm << endl;
	return 0;
}
