#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(string name, int grade) : _name(name)
{
	try
	{
		if (grade < 1)
			throw Bureaucrat::GradeTooHighException();
		if (grade > 150)
			throw Bureaucrat::GradeTooLowException();
		_grade = grade;
		cout << "\e[0;33mFields Constructor called of Bureaucrat\e[0m" << endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
	*this = copy;
	cout << "\e[0;33mCopy Constructor called of Bureaucrat\e[0m" << endl;
}

Bureaucrat::~Bureaucrat()
{
	cout << "\e[0;31mDestructor called of Bureaucrat\e[0m" << endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &assign)
{
	_grade = assign.get_grade();
	return *this;
}

void Bureaucrat::increment()
{
	try
	{
		if (_grade == 1)
			throw Bureaucrat::GradeTooHighException();
		_grade -= 1;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
}

void Bureaucrat::decrement()
{
	try
	{
		if (_grade = 150)
			throw Bureaucrat::GradeTooLowException();
		_grade += 1;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
}

std::ostream &Bureaucrat::operator<<(std::ostream &os)
{
	return os << _name << ", bureaucrat grade " << _grade << ".";
}
