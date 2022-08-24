#include "Character.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character(std::string name): ICharacter(), _name(name)
{
	std::cout << "Character Cobstructor called" << std::endl;

}

Character::Character( const Character & src ): ICharacter(), _name(src._name)
{
	std::cout << "Character Copy Constructor called" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Character::~Character()
{
	std::cout << "Cure Default Constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		delete this->slots[i];
	for(int i = 0; i < INT_MAX; i++)
	{
		if (this->droppedItems[i])
			delete this->droppedItems[i];
		else
			return;
	}
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Character &				Character::operator=( Character const & rhs )
{
	if ( this != &rhs )
	{
		this->_name = rhs.getName();
		for (int i = 0; i < 4; i++)
		{
			delete this->slots[i];
			if (rhs.slots[i])
				this->slots[i] = rhs.slots[i]->clone();
		}
		for(int i = 0; i < INT_MAX; i++)
		{
			if (this->droppedItems[i])
				delete this->droppedItems[i];
			else
				break ;
		}
		for(int i = 0; i < INT_MAX; i++)
		{
			if (rhs.droppedItems[i])
				rhs.droppedItems[i]->clone();
			else
				break ;
		}
	}
	return *this;
}
/*rhs can have more dropped items then this*/

// std::ostream &			operator<<( std::ostream & o, Character const & i )
// {
// 	//o << "Value = " << i.getValue();
// 	return o;
// }


/*
** --------------------------------- METHODS ----------------------------------
*/



void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->slots[i] == NULL)
		{
			this->slots[i] = m->clone();
			return;
		}
	}
}


void Character::unequip(int idx)
{
	for (int i = 0; i < INT_MAX; i++)
	{
		if (this->droppedItems[i] == NULL && this->slots[idx])
		{
			this->droppedItems[i] = this->slots[idx];
			this->slots[idx] = NULL;
			return ;
		}
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (this->slots[idx])
	{
		this->slots[idx]->use(target); 
	}
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const & Character::getName() const
{
	return (this->_name);
}


/* ************************************************************************** */