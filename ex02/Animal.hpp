#pragma once
#ifndef Animal_HPP
#define Animal_HPP

#include <iostream>

class AAnimal {
	protected:
		std::string _type;

	public:
		AAnimal();
		AAnimal( const AAnimal &copy );
		virtual ~AAnimal();
		AAnimal &operator=( const AAnimal &assign );

		virtual void	makeSound( void ) const = 0;
		std::string		getType( void ) const;
};

#endif