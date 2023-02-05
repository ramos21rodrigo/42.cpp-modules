#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "main.hpp"

class Animal
{
protected:
	string _type;

public:
	virtual void makeSound() const = 0;

	Animal();
	Animal(const Animal &copy);
	Animal(string type);
	virtual ~Animal();

	Animal &operator=(const Animal &assign);
	string getType() const;
};

#endif