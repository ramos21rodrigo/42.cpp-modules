#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class WrongAnimal
{
protected:
	string _type;

public:
	virtual void makeSound() const;

	WrongAnimal();
	WrongAnimal(const WrongAnimal &copy);
	WrongAnimal(string type);
	virtual ~WrongAnimal();

	WrongAnimal &operator=(const WrongAnimal &assign);
	string getType() const;
};

#endif