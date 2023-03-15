#pragma once
#ifndef Animal_HPP
#define Animal_HPP

#include <iostream>

class Animal {
	protected:
		std::string _type;

	public:
		Animal();
		Animal( const Animal &copy );
		virtual ~Animal();
		Animal &operator=( const Animal &assign );

		virtual void	makeSound( void ) const = 0;
		std::string		getType( void ) const;
};

#endif