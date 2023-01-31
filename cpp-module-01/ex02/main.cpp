#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

int main()
{
	string brain("HI THIS IS BRAIN");
	string *stringPTR = &brain;
	string stringREF = brain;

	cout << "The memory address of the string variable: " << &brain << endl;
	cout << "The memory address held by stringPTR:      " << stringPTR << endl;
	cout << "The memory address held by stringREF:      " << &stringREF << endl;
	cout << endl;

	cout << "The value of the string variable:  " << brain << endl;
	cout << "The value pointed to by stringPTR: " << *stringPTR << endl;
	cout << "The value pointed to by stringREF: " << stringREF << endl;

}