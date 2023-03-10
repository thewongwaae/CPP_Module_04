#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAAnimal() {
	_type = "WrongCat";
}

WrongCat::WrongCat( const WrongCat &copy ) : WrongAAnimal(copy) {
	*this = copy;
}

WrongCat::~WrongCat() {}

WrongCat &WrongCat::operator=( const WrongCat &assign ) {
	this->_type = assign._type;
	return *this;
}

void WrongCat::makeSound( void ) const {
	std::cout << this->getType() << ": (wrong) meow??" << std::endl;
}
