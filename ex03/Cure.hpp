#ifndef __CURE_HPP__
#define __CURE_HPP__

#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure(Cure const &src);
		virtual ~Cure();

		Cure	&operator=(Cure const &rhs);

		AMateria	*clone() const;
		void		use(ICharacter &target);
}; 

#endif