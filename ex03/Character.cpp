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
			//vlt noch auf NULLptr stellen
		for(int i = 0; i < INT_MAX; i++)
		{
			if (this->droppedItems[i])
				delete this->droppedItems[i];
			else
				break ;
		}
	//hier braucht amn jetzt iwie die clone function
		// for (int i = 0; i < 4; i++)
		// {
		// 	if (rhs.slots[i])
		// 	rhs.slots[i]->clone();
		// 	//fehlt hier noch das assignen?
		// }
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
//TODO:wo und wie werdend ie materias erstellt uerbhaupt?

std::ostream &			operator<<( std::ostream & o, Character const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

std::string const & Character::getName() const
{
	return (this->_name);
}

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
//TODO:wo und wie werdend ie materias erstellt uerbhaupt?


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
		//koennte man improven...
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


/* ************************************************************************** */