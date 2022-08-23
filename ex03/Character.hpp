#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"
# include  <limits>
// # include <bits/stdc++.h>


class Character: public ICharacter
{

	public:

		Character(std::string);
		Character( Character const & src );
		~Character();

		Character &		operator=( Character const & rhs );
		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
		//TODO: vitual hier lassen, weils auch von virtual stammt?
	private:
		AMateria* slots[4];
		AMateria* droppedItems[INT_MAX];
		std::string _name;
		

};

std::ostream &			operator<<( std::ostream & o, Character const & i );

#endif /* ******************************************************* CHARACTER_H */