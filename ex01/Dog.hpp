#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{

	public:

		Dog();
		Dog( Dog const & src );
		~Dog();
		//damit in der main nach dem richtigen gesucht wird?

		Dog &			operator=( Dog const & rhs );
		void	makeSound()const;

	private:

		Brain*	BrainPtr;

};

std::ostream &			operator<<( std::ostream & o, Dog const & i );

#endif /* ************************************************************* DOG_H */