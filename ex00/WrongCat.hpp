#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include <string>

class WrongCat: public WrongAnimal
{

	public:

		WrongCat();
		WrongCat( WrongCat const & src );
		~WrongCat();

		WrongCat &			operator=( WrongCat const & rhs );
		void	makeSound()const;

};

std::ostream &			operator<<( std::ostream & o, WrongCat const & i );

#endif /* ************************************************************* CAT_H */