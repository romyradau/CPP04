#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat(): Animal()
{
	std::cout << "Cat Constructor called" << std::endl;
	_type = "Cat";
	BrainPtr = new(std::nothrow) Brain();
	if (!BrainPtr)
	{
		std::cout << "CatBrain memory allocation failed" << std::endl;
	}
}
/*
 so one has to initialize individual values by hand each time,
 if the attribute itself is an inherited memeber?
 *this->_type("Cat")
*/

Cat::Cat( const Cat & src ): Animal(src)
{
	std::cout << "Cat Copy Constructor called" << std::endl;
	*this = src;

}
/* 
copy c macht ne default construct aber nicht unsere sondern die im background 
aka ohne allocation
aber beim assignen wird dann genau gesagt, was gemacht werden soll aka new()
wennd er c constr aufgerufen wird, wird nicht mehr der andere default aufgerufen
*/


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat()
{
	std::cout << "Cat Deconstructor called" << std::endl;
	delete BrainPtr;
	
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat &				Cat::operator=( Cat const & rhs )
{
	if ( this != &rhs )
	{
		Animal::operator=(rhs);
		if (BrainPtr)
			delete BrainPtr;
		BrainPtr = new(std::nothrow) Brain(*rhs.BrainPtr);
		if (!BrainPtr)
		{
			std::cout << "CatBrain memory allocation failed" << std::endl;
		}
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Cat const & i )
{
	o << "Animal Type = " << i.get_type();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Cat::makeSound()const
{
std::cout << "meoooooow" << std::endl;

}


// void	Cat::makeSound()
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