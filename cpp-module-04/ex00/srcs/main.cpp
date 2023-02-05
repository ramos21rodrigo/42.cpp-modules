#include "../includes/main.hpp"

int main()
{
	const WrongAnimal *animal = new WrongAnimal();
	cout << endl;
	const Animal *animal_with_type = new Animal("anytype");
	cout << endl;
	const Animal *dog = new Dog();
	cout << endl;
	const WrongCat *cat = new WrongCat();
	cout << endl;

	cout << dog->getType() << "'s sound: ";
	dog->makeSound();
	cout << cat->getType() << "'s sound: ";
	cat->makeSound();
	cout << animal->getType() << "'s sound: ";
	animal->makeSound();
	cout << animal_with_type->getType() << "'s sound: ";
	animal_with_type->makeSound();

	cout << endl;

	delete animal;
	cout << endl;
	delete dog;
	cout << endl;
	delete cat;
	cout << endl;
	delete animal_with_type;

	return 0;
}
