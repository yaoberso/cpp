#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <string>
#include <iomanip>

class Zombie {
	public:
		void announce(void);
		Zombie();
		void set_name(std::string name);
		~Zombie();
	private:
		std::string name;
};

void delete_horde(Zombie *zombieHorde);
Zombie* zombieHorde( int N, std::string name );

#endif