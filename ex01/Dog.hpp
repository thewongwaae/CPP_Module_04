#pragma once
#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
	private:
		
	public:
		Dog( void );
		Dog( const Dog &copy );
		~Dog( void );
		Dog	&operator=( const Dog &assign );

		void makeSound( void ) const;
};

#endif