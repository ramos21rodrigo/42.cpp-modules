#include "Form.hpp"

Form::Form(string name, bool is_signed, int sign_grade, int exec_grade) : _name(name), _is_signed(false)
{
	try
	{
		if (sign_grade < 1 || exec_grade < 1 )
			throw Form::GradeTooHighException();
		if (sign_grade > 150 || exec_grade > 150 )
			throw Form::GradeTooLowException();
		sign_grade = _sign_grade;
		exec_grade = _exec_grade;
		std::cout << "\e[0;33mFields Constructor called of Form\e[0m" << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
}

Form::Form(const Form &copy)
{
	*this = copy;
	std::cout << "\e[0;33mCopy Constructor called of Form\e[0m" << std::endl;
}

Form::~Form()
{
	std::cout << "\e[0;31mDestructor called of Form\e[0m" << std::endl;
}

Form & Form::operator=(const Form &assign)
{
	_name = assign.get_name();
	_is_signed = assign.get_is_signed();
	_sign_grade = assign.get_sign_grade();
	_exec_grade = assign.get_exec_grade();
	return *this;
}

string Form::get_name() const
{
	return _name;
}

bool Form::get_is_signed() const
{
	return _is_signed;
}

int Form::get_sign_grade() const
{
	return _sign_grade;
}

int Form::get_exec_grade() const
{
	return _exec_grade;
}

void Form::beSigned(Bureaucrat buro)
{
	try
	{
		if (buro.get_grade() > _sign_grade)
			throw Form::GradeTooLowException();
		_is_signed = true;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

const char * Form::GradeTooHighException::what() const throw()
{
	return "Grade too high!";
}
const char * Form::GradeTooLowException::what() const throw()
{
	return "Grade too low!";
}
