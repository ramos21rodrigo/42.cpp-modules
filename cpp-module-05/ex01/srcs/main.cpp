#include "Form.hpp"

int main()
{
	Bureaucrat andre("Andre", 15);
	cout << andre << endl;

	cout << endl;
	Bureaucrat xavier("Xavier", 151);
	Bureaucrat xavier2("Xavier2", 0);

	cout << endl;
	Bureaucrat carlos("Carlos", 3);
	Bureaucrat lituanio("Lituanio", 149);
	cout << carlos << endl
		 << lituanio << endl;
	carlos.increment();
	lituanio.decrement();
	cout << carlos << endl
		 << lituanio << endl;
	carlos.increment();
	lituanio.decrement();
	cout << carlos << endl
		 << lituanio << endl;
	carlos.increment();
	lituanio.decrement();
	cout << carlos << endl
		 << lituanio << endl;

	cout << endl;

	return 0;
}
