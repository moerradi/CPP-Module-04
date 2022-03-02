#ifndef __AMateria_HPP__
#define __AMateria_HPP__

#include <iostream>
#include <string>
#include "ICharacter.hpp"
class ICharacter;

class AMateria {
	public:
		AMateria();
		AMateria(std::string const &type);
		AMateria(AMateria const &src);
		AMateria &operator=(AMateria const &rhs);
		virtual ~AMateria();
		
		std::string const &getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
	protected:
		std::string _type;
};

#endif