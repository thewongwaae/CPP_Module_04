#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : _type("wrong_dunno") {
	std::cout << "WrongAnimal construct" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal &copy ) {
	*this = copy;
	std::cout << "WrongAnimal copy" << std::endl;
}

WrongAnimal::~WrongAnimal( void ) {
	std::cout << "WrongAnimal deconstruct" << std::endl;
}

WrongAnimal &WrongAnimal::operator=( const WrongAnimal &assign ) {
	if (this != &assign)
		this->_type = assign._type;
	std::cout << "WrongAnimal assign" << std::endl;
	return (*this);
}

void WrongAnimal::makeSound( void ) const {
	std::cout << "I dunno what sound this Wronganimal makes" << std::endl;
}

std::string WrongAnimal::getType( void ) const {
	return (this->_type);
}
