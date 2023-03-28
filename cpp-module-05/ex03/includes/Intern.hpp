#pragma once 

#include "AForm.hpp"

class Intern
{
	private:
		typedef struct s_forms {
			std::string name;
			AForm *formClass;
		} t_forms;
	public:
		Intern();
		Intern(const Intern &copy);
		
		~Intern();
		
		Intern & operator=(const Intern &assign);

		AForm *makeForm(string name, string target);		
};
