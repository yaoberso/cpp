#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name)
{
	std::cout << "-----------------------------" << std::endl;
	std::cout << "HumanB created !" <<
		std::endl << "name: " << _name <<
		std::endl;
	std::cout << "-----------------------------" << std::endl;
	return;
}

HumanB::~HumanB()
{
	std::cout << "-----------------------------" << std::endl;
	std::cout << "HumanB destroy !" <<
		std::endl << "name: " << _name <<
		std::endl;
	std::cout << "-----------------------------" << std::endl;
	return;
}

void	HumanB::attack()
{
	if (_Weapon)
	{
		std::cout << this->_name << " attacks with their " << _Weapon->getType() << std::endl;
	}
	else
	{
		std::cout << this->_name << "Has no Weapon" << std::endl;
	}
	return;
}

void HumanB::setWeapon(Weapon &Weapon)
{
	this->_Weapon = &Weapon;
	return;
}