#pragma once
#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {
	private:
		Brain *_brain;

	public:
		Dog( void );
		Dog( const Dog &copy );
		~Dog( void );
		Dog	&operator=( const Dog &assign );

		void	makeSound( void ) const;
		void	getIdeas( int i ) const;
		void	setIdea( int i, std::string idea );
};

#endif