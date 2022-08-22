#include "AbstractAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
	// Animal *Animals = new(std::nothrow) Animal[10];
	// AbstractAnimal *Animals[4];
	// for (int i = 0; i < 4; i++)
	// {
	// 	if (i % 2) {
	// 		Animals[i] = new Dog();
	// 		std::cout << static_cast<Dog*>(Animals[i])->get_ideas(i) << std::endl;
	// 	}
	// 	else {
	// 		Animals[i] = new Cat();
	// 	}
	// }
	// Animals[0]->makeSound();
	// for (int i = 0; i < 4; i++)
	// {
	// 	delete Animals[i];
	// }

	// //show deep copy
	Dog*		 Dog1 = new  Dog;
	Dog*		 Dog2 = new  Dog(*Dog1);
	// Dog 	 new Dog2(Dog1);
	std::cout << Dog1->get_ideas(10) << std::endl;
	delete Dog1;
	std::cout << Dog2->get_ideas(99) << std::endl;
	delete Dog2;
	return 0;
}
