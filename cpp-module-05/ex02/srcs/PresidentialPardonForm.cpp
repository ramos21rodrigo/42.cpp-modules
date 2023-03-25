#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("presidential pardon form", "default", 25, 5)
{}

PresidentialPardonForm::PresidentialPardonForm(string target) : AForm("presidential pardon form", target, 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy)
{
	*this = copy;
	cout << "\e[0;33mCopy Constructor called of PresidentialPardonForm\e[0m" << endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	cout << "\e[0;31mDestructor called of PresidentialPardonForm\e[0m" << endl;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm &assign)
{
	if (this == &assign	) return *this;
	return *this;
}

void PresidentialPardonForm::executeAction() const {
	cout << this->get_target() << " has been pardoned by Zaphod Beeblebrox" <<	endl;
}