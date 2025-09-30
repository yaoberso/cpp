#ifndef HUMANB_HPP
#define HUMANB_HPP
#include <iostream>
#include <string>
#include <iomanip>
#include "Weapon.hpp"

class HumanB {
	public:
		HumanB(std::string name);
		~HumanB();
		void attack();
		void setWeapon(Weapon &Weapon);
	private:
		Weapon *_Weapon;
		std::string _name;
};

#endif