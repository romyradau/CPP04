#include "AMateria.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AMateria::AMateria(): _type("undefined")
{
	std::cout << "AMateria Default Cobstructor called" << std::endl;
}
//TODO:initlist vervollstaendigen

AMateria::AMateria(std::string const & type): _type(type)
{
	std::cout << "AMateria Custom Cobstructor called" << std::endl;
}
//TODO:fehlt noch type initializen

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
//TODO:implementation
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/
std::string const & AMateria::getType() const //Returns the materia type
{
	return (this->_type);
}
//TODO::not sure if this is right here
/* ************************************************************************** */