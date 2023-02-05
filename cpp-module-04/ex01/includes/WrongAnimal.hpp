#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include "main.hpp"

class WrongAnimal
{
protected:
	string _type;

public:
	void makeSound() const;

	WrongAnimal();
	WrongAnimal(const WrongAnimal &copy);
	WrongAnimal(string type);
	virtual ~WrongAnimal();

	WrongAnimal &operator=(const WrongAnimal &assign);
	string getType() const;
};

#endif