#ifndef PHONEBOOK_H
#define PHONEBOOK_H
#include "Contact.hpp"
#include <iostream>
#include <string>

class PhoneBook {
	public:
		PhoneBook();
		void set_pn_contact();
		void display_contact();
		~PhoneBook();
	private:
		Contact contact[8];
		int index;
		int contactCount;
};


#endif