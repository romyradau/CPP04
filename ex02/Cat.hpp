#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
#include "AbstractAnimal.hpp"
#include "Brain.hpp"

class Cat: public AbstractAnimal
{

	public:

		Cat();
		Cat( Cat const & src );
		virtual~Cat();

		Cat &			operator=( Cat const & rhs );
		virtual void	makeSound()const;


	private:

		Brain*	BrainPtr;

};

std::ostream &			operator<<( std::ostream & o, Cat const & i );

#endif /* ************************************************************* CAT_H */