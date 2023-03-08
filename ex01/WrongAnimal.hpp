#pragma once
#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
	protected:
		std::string _type;

	public:
		WrongAnimal();
		WrongAnimal( const WrongAnimal &copy );
		virtual ~WrongAnimal();
		WrongAnimal &operator=( const WrongAnimal &assign );

		virtual void	makeSound( void ) const;
		std::string		getType( void ) const;
};

#endif