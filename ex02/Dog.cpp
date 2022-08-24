#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog(): AbstractAnimal()
{
	std::cout << "Dog Constructor called" << std::endl;
	_type = "Dog";
	BrainPtr = new(std::nothrow) Brain();
	if (!BrainPtr)
	{
		std::cout << "DogBrain memory allocation failed" << std::endl;
	}
}
/*
 so one has to initialize individual values by hand each time,
 if the attribute itself is an inherited memeber?
 *this->_type("Dog")
*/

Dog::Dog( const Dog & src ): AbstractAnimal(src), BrainPtr (NULL)
{
	std::cout << "Dog Copy Constructor called" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	std::cout << "Dog Deconstructor called" << std::endl;
	delete BrainPtr;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &				Dog::operator=( Dog const & rhs )
{
	if ( this != &rhs )
		{
			AbstractAnimal::operator=(rhs);
			if (BrainPtr)
				delete BrainPtr;
			BrainPtr = new(std::nothrow) Brain(*rhs.BrainPtr);
			if (!BrainPtr)
			{
				std::cout << "DogBrain memory allocation failed" << std::endl;
			}
		}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Dog const & i )
{
	o << "AbstractAnimal Type = " << i.get_type();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Dog::makeSound()const
{
std::cout << "wuffwuff" << std::endl;
}

std::string	Dog::get_ideas(int i)const
{
	return (this->BrainPtr->get_ideas(i));
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