#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Animal.hpp"

int main()
{
	const Animal *animals[4] = {
		new Dog(),
		new Dog(),
		new Cat(),
		new Cat()};

	for (int i = 0; i < 4; i++)
		delete animals[i];

	return 0;
}
