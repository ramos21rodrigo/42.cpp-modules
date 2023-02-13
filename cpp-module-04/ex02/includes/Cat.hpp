#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain *_brain;

public:
	void makeSound() const;

	Cat();
	Cat(const Cat &copy);
	~Cat();

	Cat &operator=(const Cat &assign);
	string getType() const;
};

#endif