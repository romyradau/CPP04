#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->get_type() << " " << std::endl;
	j->makeSound();
	std::cout << i->get_type() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	meta->makeSound();
	
	return 0;
}

// int main()
// {
// 	const WrongAnimal* meta = new WrongAnimal();
// 	const WrongAnimal* i = new WrongCat();
// 	// const WrongAnimal* j = new Dog();
// 	// std::cout << j->get_type() << " ";
// 	// i->makeSound(); //will output the cat sound!
// 	std::cout <<  i->get_type() << " ";
// 	i->makeSound();
// 	meta->makeSound();

// 	return 0;
// }