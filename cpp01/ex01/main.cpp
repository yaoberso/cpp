#include "Zombie.hpp"

int main()
{
	Zombie *Horde = zombieHorde(3, "foo");
	delete[] Horde;
	return (0);
}