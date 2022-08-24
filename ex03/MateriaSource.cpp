#include "MateriaSource.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource Default Constructor called" << std::endl;

}

MateriaSource::MateriaSource( const MateriaSource & src )
{
	std::cout << "MateriaSource Copy constructor called" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource Deconstructor called" << std::endl;
	for(int i = 0; i < 4; i++)
		delete this->storage[i];
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

MateriaSource &				MateriaSource::operator=( MateriaSource const & rhs )
{
	if ( this != &rhs )
	{
		for (int i = 0; i < 4; i++)
			this->storage[i] = rhs.storage[i];
	}
	return *this;
}
//shallow copy - have the same mem
//made it on purpose


// std::ostream &			operator<<( std::ostream & o, MateriaSource const & i )
// {
// 	//o << "Value = " << i.getValue();
// 	return o;
// }


/*
** --------------------------------- METHODS ----------------------------------
*/

void MateriaSource::learnMateria(AMateria* m)
{
	for(int i = 0; i < 4; i++)
	{
		if (this->storage[i] == NULL)
		{
			this->storage[i] = m;
			return;
		}
		
	}
}


AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->storage[i] && this->storage[i]->getType() == type)
			return this->storage[i];
	}
	return NULL;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */