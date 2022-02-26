#ifndef __WRONGCAT_HPP__
#define __WRONGCAT_HPP__

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	public:
		WrongCat();
		WrongCat(WrongCat const &src);
		WrongCat &operator=(WrongCat const &rhs);

		~WrongCat();		
};

#endif