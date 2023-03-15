#pragma once
#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
	private:
		Brain *_brain;

	public:
		Dog( void );
		Dog( const Dog &copy );
		~Dog( void );
		Dog	&operator=( const Dog &assign );

		void	makeSound( void ) const;
		void	getIdeas( void ) const;
		void	setIdea( int i, std::string idea );
};

#endif