#pragma once
#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	private:
		
	public:
		WrongCat( void );
		WrongCat( const WrongCat &copy );
		~WrongCat( void );
		WrongCat	&operator=( const WrongCat &assign );

		void makeSound( void ) const;
};

#endif