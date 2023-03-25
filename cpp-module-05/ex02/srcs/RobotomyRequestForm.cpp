#include "RobotomyRequestForm.hpp"

#include <ctime>
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm() : AForm("robotomy form", "default", 72, 45)
{}

RobotomyRequestForm::RobotomyRequestForm(string target) : AForm("robotomy form", target, 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy)
{
	*this = copy;
	cout << "\e[0;33mCopy Constructor called of RobotomyRequestForm\e[0m" << endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	cout << "\e[0;31mDestructor called of RobotomyRequestForm\e[0m" << endl;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &assign)
{
	if (this == &assign) return *this;
	return *this;
}

void RobotomyRequestForm::executeAction() const {

	std::srand(std::time(NULL));

	cout << "Drill go prrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr" << endl;

	if (random() % 2 == 0)
		cout << this->get_target() << " successfully robotomized." << endl;
	else
		cout << this->get_target() << " failed when trying to robotimize." << endl;
}