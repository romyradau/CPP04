# include "AMateria.hpp"
# include "Cure.hpp"
# include "Ice.hpp"
# include "Character.hpp"
# include "ICharacter.hpp"
# include "IMateriaSource.hpp"
# include "MateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	//src needs to be deleted
	src->learnMateria(new Ice());
	//(MAteriaSource)this->storage[i] holds new Ice needs to be deleted
	src->learnMateria(new Cure());
	//(MateriaSource)this->storage[i] holds new Cure needs to be deleted
	ICharacter* me = new Character("me");
	//me needs to be deleted
	AMateria* tmp;
	tmp = src->createMateria("ice");
	//tmp holds copy of ice (no new here)
	me->equip(tmp);
	//new ice !!! needs deletion
	tmp = src->createMateria("cure");
	me->equip(tmp);
	//new Cure !! needs deletion
	ICharacter* bob = new Character("bob");
	//new Charcater bob needs deletion
	me->use(0, *bob);
	me->use(1, *bob);
	// me->unequip(0);
	delete bob;
	delete me;
	delete src;
	system ("leaks materia");
	// AMateria *	ice = new Ice;
	// std::cout << ice->getType() << std::endl;
	// AMateria *  fakeCure = ice->clone();
	return 0;
}

//what's the differnce between mem allocation in operator=
//questions in AMateria