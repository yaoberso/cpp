#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &Weapon): _Weapon(Weapon), _name(name)
{
	std::cout << "-----------------------------" << std::endl;
	std::cout << "HumanA created !" <<
		std::endl << "name: " << _name <<
		std::endl << "Weappon: " << _Weapon.getType() <<
		std::endl;
	std::cout << "-----------------------------" << std::endl;
	return;
}

HumanA::~HumanA()
{
	std::cout << "-----------------------------" << std::endl;
	std::cout << "HumanA destroy !" <<
		std::endl << "name: " << _name <<
		std::endl << "Weappon: " << _Weapon.getType() <<
		std::endl;
	std::cout << "-----------------------------" << std::endl;
	return;
}

void	HumanA::attack()
{
	std::cout << this->_name << " attacks with their " << _Weapon.getType() << std::endl;
	return;
}