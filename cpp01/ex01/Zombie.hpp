#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <string>
#include <iomanip>

class Zombie {
	public:
		void announce(void);
		Zombie(std::string name);
		~Zombie();
	private:
		Zombie* newZombie( std::string name );
		std::string const name;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif