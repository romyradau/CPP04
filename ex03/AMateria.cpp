#include "AMateria.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AMateria::AMateria(): _type("undefined")
{
	std::cout << "AMateria Default Cobstructor called" << std::endl;
}


AMateria::AMateria(std::string const & type): _type(type)
{
	std::cout << "AMateria Custom Cobstructor called" << std::endl;
}
//TODO:should one call ices and cures cc?
//it shouldn't be posible to call an AClass's conctructor...


AMateria::AMateria( const AMateria & src )
{
	std::cout << "AMateria Copy Cobstructor called" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AMateria::~AMateria()
{
	std::cout << "AMateria Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AMateria &				AMateria::operator=( AMateria const & rhs )
{
	if ( this != &rhs )
	{
		this->_type = rhs.getType();
	}
	return *this;
}

// std::ostream &			operator<<( std::ostream & o, AMateria const & i )
// {
// 	//o << "Value = " << i.getValue();
// 	return o;
// }


/*
** --------------------------------- METHODS ----------------------------------
*/

void AMateria::use(ICharacter& target)
{
	std::cout << "no special use." << std::endl;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/
std::string const & AMateria::getType() const //Returns the materia type
{
	return (this->_type);
}

/* ************************************************************************** */