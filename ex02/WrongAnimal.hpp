#pragma once
#ifndef WRONGAAnimal_HPP
#define WRONGAAnimal_HPP

#include <iostream>

class WrongAAnimal {
	protected:
		std::string _type;

	public:
		WrongAAnimal();
		WrongAAnimal( const WrongAAnimal &copy );
		virtual ~WrongAAnimal();
		WrongAAnimal &operator=( const WrongAAnimal &assign );

		virtual void	makeSound( void ) const;
		std::string		getType( void ) const;
};

#endif