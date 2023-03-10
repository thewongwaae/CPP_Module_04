#include "WrongAAnimal.hpp"

WrongAAnimal::WrongAAnimal( void ) : _type("wrong_dunno") {}

WrongAAnimal::WrongAAnimal( const WrongAAnimal &copy ) {
	*this = copy;
}

WrongAAnimal::~WrongAAnimal( void ) {}

WrongAAnimal &WrongAAnimal::operator=( const WrongAAnimal &assign ) {
	this->_type = assign._type;
	return (*this);
}

void WrongAAnimal::makeSound( void ) const {
	std::cout << "I dunno what sound this WrongAAnimal makes" << std::endl;
}

std::string WrongAAnimal::getType( void ) const {
	return (this->_type);
}
