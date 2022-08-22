#include "AbstractAnimal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AbstractAnimal::AbstractAnimal(): _type("AbstractAnimal")
{
	std::cout << "AbstractAnimal Constructor called" << std::endl;
}

AbstractAnimal::AbstractAnimal( const AbstractAnimal & src ): _type(src.get_type())
{
	std::cout << "AbstractAnimal Copy Constructor called" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AbstractAnimal::~AbstractAnimal()
{
	std::cout << "AbstractAnimal Deconstructor called" << std::endl;
	
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AbstractAnimal &				AbstractAnimal::operator=( AbstractAnimal const & rhs )
{
	if ( this != &rhs )
	{
		this->_type= rhs.get_type();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, AbstractAnimal const & i )
{
	o << "Type = " << i.get_type();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

std::string	AbstractAnimal::get_type()const
{
	return(this->_type);
}


/* ************************************************************************** */