#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>
# include <sstream>

class Brain
{

	public:

		Brain();
		Brain( Brain const & src );
		~Brain();

		Brain &			operator=( Brain const & rhs );
		std::string		get_ideas(int i)const;
		void			set_ideas(std::string);



	protected:

		std::string ideas[100];

};

std::ostream &			operator<<( std::ostream & o, Brain const & i );

#endif /* *********************************************************** BRAIN_H */