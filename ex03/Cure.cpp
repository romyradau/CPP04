#include "Cure.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cure::Cure(): AMateria()
{
	std::cout << "Cure Default Cobstructor called" << std::endl;
	this->_type = "cure";
}

Cure::Cure( const Cure & src ):  AMateria(src)
{
	std::cout << "Cure Default Constructor called" << std::endl;
	this->_type = src._type;
}
//wenn attributes per hand initialisiert werden braucht man keinen this pointer mehr


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cure::~Cure()
{
	std::cout << "Cure Destructor called" << std::endl;

}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cure &				Cure::operator=( Cure const & rhs )
{
	if ( this != &rhs )
	{
		this->_type = rhs.getType();
	}
	return *this;
}

// std::ostream &			operator<<( std::ostream & o, Cure const & i )
// {
// 	//o << "Value = " << i.getValue();
// 	return o;
// }


/*
** --------------------------------- METHODS ----------------------------------
*/
AMateria* Cure::clone() const
{
	return ( new Cure() );
	//kann man das so schreiben?
}
//TODO: wenn der hier nur nen AM Pointer zuruckgibt, 
//woher weiss er dann, dass das auch ein cure ist?

void Cure::use(ICharacter& target)
{
	std::cout << "heals " << target.getName() << "’s wounds" << std::endl;
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */