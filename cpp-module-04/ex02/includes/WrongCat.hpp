#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	using WrongAnimal::makeSound;

	WrongCat();
	WrongCat(const WrongCat &copy);
	WrongCat(string type);

	~WrongCat();
	WrongCat &operator=(const WrongCat &assign);
	string getType() const;
};

#endif