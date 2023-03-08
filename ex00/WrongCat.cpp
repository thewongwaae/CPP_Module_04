#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal() {
	_type = "WrongCat";
}

WrongCat::WrongCat( const WrongCat &copy ) : WrongAnimal(copy) {
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
