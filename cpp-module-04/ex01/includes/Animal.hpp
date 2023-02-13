#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Animal
{
protected:
	string _type;

public:
	virtual void makeSound() const;

	Animal();
	Animal(const Animal &copy);
	Animal(string type);
	virtual ~Animal();

	Animal &operator=(const Animal &assign);
	string getType() const;
};

#endif