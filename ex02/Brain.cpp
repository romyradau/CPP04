#include "Brain.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Brain::Brain()
{
	std::cout << "Brain Constructor called" << std::endl;
	set_ideas(" food for me");

}

Brain::Brain( const Brain & src )
{
	std::cout << "Brain Copy Constructor called" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Brain::~Brain()
{
	std::cout << "Brain Deconstructor called" << std::endl;

}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Brain &				Brain::operator=( Brain const & rhs )
{
	if ( this != &rhs )
	{
		for(int i = 0; i < 100; i++)
		{
			this->ideas[i] = rhs.ideas[i];
		}
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Brain const & src )
{
	for(int i = 0; i < 10; i++)
	{
		o << "idea: " << i << " " << src.get_ideas(i);
	}
	//wie kann ich heir durch den pointer loopen?
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/
void	Brain::set_ideas(std::string idea)
{
	for(int i = 1; i <= 100; i++)
	{
		std::string s;
		std::ostringstream tem;
		tem << i;
		s = tem.str();
		//make string out of integer
		s += ": " + idea;
		this->ideas[i] = s;

	}
}

std::string	Brain::get_ideas(int i)const
{
	return (this->ideas[i]);
}
//wie kann man nen pointer zuruck geben?
/* ************************************************************************** */