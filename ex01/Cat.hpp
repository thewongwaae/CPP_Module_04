#pragma once
#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
	private:
		
	public:
		Cat( void );
		Cat( const Cat &copy );
		~Cat( void );
		Cat	&operator=( const Cat &assign );

		void makeSound( void ) const;
};

#endif