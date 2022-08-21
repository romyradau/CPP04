#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
	// Animal *Animals = new(std::nothrow) Animal[10];
	Animal *Animals[10];

	// if (!Animals)
	// 	std::cout << "memory allocation failed" << std::endl;
	// for (int i = 0; i < 5; i++)
	// 	Animals[i] = Dog();
	// for (int i = 0; i < 5; i++)
	// 	Animals[i] = Cat();
	for (int i = 0; i < 4; i++)
	{
		if (i % 2) {
			Animals[i] = new Dog();
			// Dog	Dog1 = *Animals[i];
			//es bleibt einfach stur ein Animal...
		}
		else {
			Animals[i] = new Cat();
		}
	}
	Animals[0]->makeSound();
	for (int i = 0; i < 4; i++)
	{
		delete Animals[i];
	}

	// Dog		Dog1;
	// // Dog 	Dog2(Dog1);
	// std::cout << Dog1.BrainPtr->get_ideas(99) << std::endl;
	// //god damnit... man braucht fuer ales getter und setter -.-
	// return 0;
}
//wie kann er checken, dass er jetzt ne Katze ist??
