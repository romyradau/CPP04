#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{

	public:

		Animal();
		Animal( Animal const & src );
		virtual~Animal();

		Animal &		operator=( Animal const & rhs );
		virtual void	makeSound()const;
		std::string		get_type()const;


	protected:

		std::string _type;

};

std::ostream &			operator<<( std::ostream & o, Animal const & i );

#endif /* ********************************************************** ANIMAL_H */

/* also for protected attributes you need getters */
/* its sufficient to declare makeSound virtua only here and not also in As subclasses - why? */