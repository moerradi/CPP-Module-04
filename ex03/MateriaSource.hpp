#ifndef __MateriaSource_HPP__
#define __MateriaSource_HPP__

#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource();
		MateriaSource(MateriaSource const &src);
		~MateriaSource();

		MateriaSource &operator=(MateriaSource const &rhs);

		void learnMateria(AMateria* m);
		AMateria* createMateria(std::string const & type);
	private:
		AMateria* _inventory[4];
};

#endif