#pragma once
#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal {
	private:
		Brain *_brain;
	
	public:
		Cat( void );
		Cat( const Cat &copy );
		~Cat( void );
		Cat	&operator=( const Cat &assign );

		void	makeSound( void ) const;
		void	getIdeas( int i ) const;
		void	setIdea( int i, std::string idea );
};

#endif