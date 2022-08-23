#include "Ice.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Ice::Ice(): AMateria()
{
	std::cout << "Ice Default Constructor called" << std::endl;
	this->_type = "ice";

}

Ice::Ice( const Ice & src ):  AMateria(src)
{
	std::cout << "Ice Copy Constructor called" << std::endl;
	this->_type = src._type;

}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Ice::~Ice()
{
	std::cout << "Ice Destructor called" << std::endl;

}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Ice &				Ice::operator=( Ice const & rhs )
{
	if ( this != &rhs )
	{
		this->_type = rhs.getType();
	}
	return *this;
}

// std::ostream &			operator<<( std::ostream & o, Ice const & i )
// {
// 	//o << "Value = " << i.getValue();
// 	return o;
// }


/*
** --------------------------------- METHODS ----------------------------------
*/

AMateria* Ice::clone() const
{
	return ( new Ice());
}

void Ice::use(ICharacter& target)
{
	std::cout << "shoots an ice bolt at " << target.getName() << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */