#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Bureaucrat
{
private:
	const string _name;
	int _grade;

public:
	void increment();
	void decrement();

	Bureaucrat(const Bureaucrat &copy);
	Bureaucrat(string _name, int grade);
	~Bureaucrat();
	Bureaucrat &operator=(const Bureaucrat &assign);
	std::ostream operator<<(std::ostream &os);

	string get_name() const { return _name; }
	int get_grade() const { return _grade; }

	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return "Grade too high!";
		};
	};

	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return "Grade too low!";
		};
	};
};

#endif