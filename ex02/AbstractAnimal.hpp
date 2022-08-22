#ifndef AbstractAnimal_HPP
# define AbstractAnimal_HPP

# include <iostream>
# include <string>

class AbstractAnimal
{

	public:

		AbstractAnimal();
		AbstractAnimal( AbstractAnimal const & src );
		virtual~AbstractAnimal();

		AbstractAnimal &	operator=( AbstractAnimal const & rhs );
		virtual void		makeSound()const = 0;
		std::string			get_type()const;

	protected:

		std::string _type;

};

std::ostream &			operator<<( std::ostream & o, AbstractAnimal const & i );

#endif /* ********************************************************** AbstractAnimal_H */

/* also for protected attributes you need getters */
/* its sufficient to declare makeSound virtua only here and not also in As subclasses - why? */