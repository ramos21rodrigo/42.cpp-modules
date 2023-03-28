#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Form;

class Bureaucrat
{
private:
	const string _name;
	int _grade;

public:
	void increment();
	void decrement();
	void signForm(Form &form);

	Bureaucrat();
	Bureaucrat(const Bureaucrat &copy);
	Bureaucrat(string _name, int grade);
	~Bureaucrat();
	Bureaucrat &operator=(const Bureaucrat &assign);

	string get_name() const;
	int get_grade() const;

	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat);

#endif