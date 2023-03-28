#ifndef FORM_HPP
#define FORM_HPP

#include <fstream>

#include "Bureaucrat.hpp"

class AForm
{
	private:
		string _name;
		string _target;
		bool _is_signed;
		int _sign_grade;
		int _exec_grade;

	public:
		AForm();
		AForm(const AForm &copy);
		AForm(string name, string _target, int sign_grade, int exec_grade);
		virtual ~AForm();
		
		AForm & operator=(const AForm &assign);
		
		string get_name() const;
		string get_target() const;
		bool get_is_signed() const;
		int get_sign_grade() const;
		int get_exec_grade() const;
		
		void beSigned(Bureaucrat &buro);
		void beExecuted(Bureaucrat &buro);

		virtual void executeAction() const = 0;

		class GradeTooHighException : public std::exception {
			virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception {
			virtual const char* what() const throw();
		};

		class NotSigned : public std::exception {
			virtual const char* what() const throw();
		};
};

std::ostream &operator<<(std::ostream &out, AForm const &form);

#endif