#pragma once
#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal, public Brain {
	private:
		Brain *_brain;

	public:
		Dog( void );
		Dog( const Dog &copy );
		~Dog( void );
		Dog	&operator=( const Dog &assign );

		void makeSound( void ) const;
};

#endif