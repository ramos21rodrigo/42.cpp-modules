#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Animal.hpp"

int main()
{
	// const Animal *animal = new Animal();
	// cout << endl;
	// const Animal *animal_with_type = new Animal("anytype");
	cout << endl;
	const Animal *dog = new Dog();
	cout << endl;
	const Cat *cat = new Cat();
	cout << endl;

	cout << dog->getType() << "'s sound: ";
	dog->makeSound();
	cout << cat->getType() << "'s sound: ";
	cat->makeSound();
	// cout << animal->getType() << "'s sound: ";
	// animal->makeSound();
	// cout << animal_with_type->getType() << "'s sound: ";
	// animal_with_type->makeSound();

	cout << endl;

	// delete animal;
	// cout << endl;
	delete dog;
	cout << endl;
	delete cat;
	// cout << endl;
	// delete animal_with_type;

	return 0;
}
