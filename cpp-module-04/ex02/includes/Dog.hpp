#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain *_brain;

public:
	void makeSound() const;

	Dog();
	Dog(const Dog &copy);
	~Dog();

	Dog &operator=(const Dog &assign);
	string getType() const;
};

#endif