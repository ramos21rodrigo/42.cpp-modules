#ifndef CAT_HPP
#define CAT_HPP

#include "main.hpp"

class Cat : public Animal
{
public:
	void makeSound() const;

	Cat();
	Cat(const Cat &copy);
	~Cat();

	Cat &operator=(const Cat &assign);
	string getType() const;
};

#endif