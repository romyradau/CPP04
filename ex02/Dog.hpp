#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
#include "AbstractAnimal.hpp"
#include "Brain.hpp"

class Dog: public AbstractAnimal
{

	public:

		Dog();
		Dog( Dog const & src );
		virtual~Dog();

		Dog &			operator=( Dog const & rhs );
		virtual void	makeSound()const;
		std::string		get_ideas(int i)const;
		//better to use const ref for getters?


	private:

		Brain*	BrainPtr;

};

std::ostream &			operator<<( std::ostream & o, Dog const & i );

#endif /* ************************************************************* DOG_H */