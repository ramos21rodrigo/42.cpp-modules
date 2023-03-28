#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("shrubbery form", "default", 145, 137)
{}

ShrubberyCreationForm::ShrubberyCreationForm(string target) : AForm("shrubbery form", target, 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy)
{
	*this = copy;
	cout << "\e[0;33mCopy Constructor called of ShrubberyCreationForm\e[0m" << endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	cout << "\e[0;31mDestructor called of ShrubberyCreationForm\e[0m" << endl;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &assign)
{
	if (this == &assign) return *this;
	return *this;
}

void ShrubberyCreationForm::executeAction() const {

	std::ofstream out;

	out.open((this->get_target() + "_shrubbery").c_str(), std::ofstream::in | std::ofstream::trunc);

	out << endl;
	out << "                                            ." << endl;
	out << "                                    .         ;  " << endl;
	out << "       .              .              ;%     ;;   " << endl;
	out << "         ,           ,                :;%  %;   " << endl;
	out << "          :         ;                   :;%;'     .,   " << endl;
	out << " ,.        %;     %;            ;        %;'    ,;" << endl;
	out << "   ;       ;%;  %%;        ,     %;    ;%;    ,%'" << endl;
	out << "    %;       %;%;      ,  ;       %;  ;%;   ,%;' " << endl;
	out << "     ;%;      %;        ;%;        % ;%;  ,%;'" << endl;
	out << "      `%;.     ;%;     %;'         `;%%;.%;'" << endl;
	out << "       `:;%.    ;%%. %@;        %; ;@%;%'" << endl;
	out << "          `:%;.  :;bd%;          %;@%;'" << endl;
	out << "            `@%:.  :;%.         ;@@%;'   " << endl;
	out << "              `@%.  `;@%.      ;@@%;         " << endl;
	out << "                `@%%. `@%%    ;@@%;        " << endl;
	out << "                  ;@%. :@%%  %@@%;       " << endl;
	out << "                    %@bd%%%bd%%:;     " << endl;
	out << "                      #@%%%%%:;;" << endl;
	out << "                      %@@%%%::;" << endl;
	out << "                      %@@@%(o);  . '         " << endl;
	out << "                      %@@@o%;:(.,'         " << endl;
	out << "                  `.. %@@@o%::;         " << endl;
	out << "                     `)@@@o%::;         " << endl;
	out << "                      %@@(o)::;        " << endl;
	out << "                     .%@@@@%::;         " << endl;
	out << "                     ;%@@@@%::;.          " << endl;
	out << "                    ;%@@@@%%:;;;. " << endl;
	out << "                ...;%@@@@@%%:;;;;,..   " << endl;

}