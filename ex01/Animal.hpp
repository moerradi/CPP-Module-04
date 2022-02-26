#ifndef __ANIMAL_HPP__
#define __ANIMAL_HPP__

#include <string>
#include <iostream>

class Animal {
	public:
		Animal();
		Animal(std::string const &type);
		Animal(Animal const &src);
		Animal &operator=(Animal const &rhs);

		~Animal();
		
		void		makeSound(void);
		std::string	getType(void);
	private:
		std::string type;
	
};

#endif //__ANIMAL_HPP__