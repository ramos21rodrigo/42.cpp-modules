#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form
{
	private:
		string _name;
		bool _is_signed;
		int _sign_grade;
		int _exec_grade;

	public:
		Form();
		Form(const Form &copy);
		Form(string name, bool is_signed, int sign_grade, int exec_grade);
		~Form();
		
		Form & operator=(const Form &assign);
		
		string get_name() const;
		bool get_is_signed() const;
		int get_sign_grade() const;
		int get_exec_grade() const;
		
		void beSigned(Bureaucrat buro);

		class GradeTooHighException : public std::exception {
			virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			virtual const char* what() const throw();
		};
		
};

#endif