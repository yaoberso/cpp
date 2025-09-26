#ifndef CONTACT_H
#define CONTACT_H
#include <iostream>
#include <string>
#include <iomanip>

class Contact {
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
	public:
		Contact();
		~Contact();
		void setContact(std::string first_name, std::string last_name,
                std::string nickname, std::string phone_number,
                std::string darkest_secret);
		std::string get_fn();
		std::string get_ln();
		std::string get_nn();
		std::string get_ph();
		std::string get_ds();
};

#endif