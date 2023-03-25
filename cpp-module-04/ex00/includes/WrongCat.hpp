#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	void makeSound() const;

	WrongCat();
	WrongCat(const WrongCat &copy);
	WrongCat(string type);

	~WrongCat();
	WrongCat &operator=(const WrongCat &assign);
	string getType() const;
};

#endif