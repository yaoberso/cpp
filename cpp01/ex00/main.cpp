#include "Zombie.hpp"

int main()
{
	Zombie *Z1 = newZombie("Foo");
	Z1->announce();
	randomChump("Chump");
	delete(Z1);
	return (0);
}