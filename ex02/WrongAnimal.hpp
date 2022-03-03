#ifndef __WRONGANIMAL_HPP__
#define __WRONGANIMAL_HPP__

#include <string>
#include <iostream>

class WrongAnimal {
	public:
		WrongAnimal();
		WrongAnimal(std::string const &type);
		WrongAnimal(WrongAnimal const &src);
		WrongAnimal &operator=(WrongAnimal const &rhs);

		~WrongAnimal();
		
		void		makeSound(void) const;
		std::string	getType(void);
	protected:
		std::string type;
	
};

#endif //__WRONGANIMAL_HPP__