#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongCat.hpp"

int main()
{
	const Animal *dog = new Dog();
	cout << endl;
	const Animal *cat = new Cat();
	cout << endl;
	const WrongAnimal *animal = new WrongCat();
	cout << endl;

	cout << dog->getType() << "'s sound: ";
	dog->makeSound();
	cout << cat->getType() << "'s sound: ";
	cat->makeSound();
	cout << animal->getType() << "'s sound: ";
	animal->makeSound();

	cout << endl;

	delete animal;
	cout << endl;
	delete dog;
	cout << endl;
	delete cat;
	cout << endl;

	return 0;
}
