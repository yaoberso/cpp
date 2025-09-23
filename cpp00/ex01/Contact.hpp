#ifndef CONTACT_H
#define CONTACT_H
#include <iostream>
#include <string>
#include <iomanip>

class Contact {
	private:
		int index;
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
	public:
		Contact();
		~Contact();
		void setContact(int i, std::string first_name, std::string last_name,
                std::string nickname, std::string phone_number,
                std::string darkest_secret);
		void getContact(int index);

};

#endif