#include "Weapon.hpp"

Weapon::Weapon(std::string type): _type(type)
{
	std::cout << "Weapon created !" << " Type: " << _type << std::endl;
	return ;
}

Weapon::~Weapon()
{
	std::cout << "Weapon destroy !" << " Type: " << _type << std::endl;
	return ;
}

std::string const &Weapon::getType()
{
	return (this->_type);
}

void		Weapon::setType(std::string value)
{
	this->_type = value;
	return;
}