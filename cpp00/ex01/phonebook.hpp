#ifndef PHONEBOOK_H
#define PHONEBOOK_H
#include <iostream>
#include <string>

class Contact {
	private:
		int index;
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
	public:
		void setContact(int index, std::string first_name, std::string last_name,
                std::string nickname, std::string phone_number,
                std::string darkest_secret);

};

class PhoneBook {
	private:
		Contact	contact[8];
	public:
		addContact();
		srcContact();
		exit();
};

#endif