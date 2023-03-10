#pragma once
#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAAnimal.hpp"

class WrongCat : public WrongAAnimal {
	private:
		
	public:
		WrongCat( void );
		WrongCat( const WrongCat &copy );
		~WrongCat( void );
		WrongCat	&operator=( const WrongCat &assign );

		void makeSound( void ) const;
};

#endif