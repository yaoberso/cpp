#include "Zombie.hpp"

Zombie::Zombie(std::string const n) : name(n)
{
	std::cout << "Zombie " << this->name << " created" << std::endl;
	return;
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << this->name << " destroy" << std::endl;
	return;
}

void Zombie::announce()
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return;
}