#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"
#include <iostream>
#include <string>
#include <iomanip>

class HumanA {
	public:
		HumanA(std::string name, Weapon &Weapon);
		~HumanA();
		void attack();
	private:
		Weapon &_Weapon;
		std::string _name;
};

#endif