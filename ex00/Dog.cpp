#include "Animal.hpp"
#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog(): Animal()
{
	std::cout << "Dog Constructor called" << std::endl;
	_type = "Dog";
}
/*
 so one has to initialize individual values by hand each time,
 if the attribute itself is an inherited memeber?
 *this->_type("Dog")
*/

Dog::Dog( const Dog & src ): Animal(src)
{
	std::cout << "Dog Copy Constructor called" << std::endl;
	_type = "Dog";

}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	std::cout << "Dog Deconstructor called" << std::endl;
	
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &				Dog::operator=( Dog const & rhs )
{
	if ( this != &rhs )
	{
		Animal::operator=(rhs);
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Dog const & i )
{
	o << "Animal Type = " << i.get_type();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Dog::makeSound()const
{
std::cout << "wuffwuff" << std::endl;
}


// void	Dog::makeSound()
// {
// std::cout << "meoooooow" << std::endl
// <<"            *     ,MMM8&&&.            * "<< std::endl
// <<"                  MMMM88&&&&&    . "<< std::endl
// <<"                 MMMM88&&&&&&& "<< std::endl
// <<"     *           MMM88&&&&&&&& "<< std::endl
// <<"                 MMM88&&&&&&&& "<< std::endl
// <<"                 'MMM88&&&&&&' "<< std::endl
// <<"                   'MMM8&&&'      *    "<< std::endl
// <<"          |\___/|     /\___/\ "<< std::endl
// <<"          )     (     )    ~(  "<< std::endl
// <<"         =\     /=   =\~    /= "<< std::endl
// <<"           )===(       ) ~ ( "<< std::endl
// <<"          /     \     /     \ "<< std::endl
// <<"          |     |     ) ~   ( "<< std::endl
// <<"         /       \   /     ~ \ "<< std::endl
// <<"         \       /   \~     ~/ "<< std::endl
// <<"  jgs_/\_/\__  _/_/\_/\__~__/_/\_/\_/\_/\_/\_ "<< std::endl
// <<"  |  |  |  |( (  |  |  | ))  |  |  |  |  |  | "<< std::endl
// <<"  |  |  |  | ) ) |  |  |/ |  |  |  |  |  |  | "<< std::endl
// <<"  |  |  |  |(_(  |  |  (( |  |  |  |  |  |  | "<< std::endl
// <<"  |  |  |  |  |  |  |  |\)|  |  |  |  |  |  | "<< std::endl
// <<"  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | "<< std::endl;

// }

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */