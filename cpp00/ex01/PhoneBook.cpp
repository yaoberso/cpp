#include "phonebook.hpp"

PhoneBook::PhoneBook()
{
	index = 0;
	more_contact = 0;
	return;
}
PhoneBook::~PhoneBook()
{
	return;
}

void	PhoneBook::set_pn_contact()
{
	std::string fn;
	std::string ln;
    std::string nn; 
	std::string pn;
	std::string ds;
	std::cout << "First Name:";
	std::getline(std::cin, fn);
	std::cout << "Last Name:";
	std::getline(std::cin, ln);
	std::cout << "Nickname:";
	std::getline(std::cin, nn);
	std::cout << "Phone Number:";
	std::getline(std::cin, pn);
	std::cout << "Darkest Secret:";
	std::getline(std::cin, ds);
	this->contact[index].setContact(fn, ln, nn, pn, ds);
	this->index = (this->index + 1) % 8;
	if(this->index == 8)
	{
		this->more_contact = 1;
	}
}

std::string if_to_long(std::string string)
{
    if(string.length() > 10)
        return(string.substr(0, 9) + ".");
    return (string);
}

void	PhoneBook::display_contact()
{
	int i = 0;
	int idx = this->index;
	if (more_contact == 1)
	{
		idx = 7;
	}
	while(i < idx)
	{
		std::cout 
        	<< std::setw(10) << i << '|' 
        	<< std::setw(10) << if_to_long(this->contact[i].get_fn()) << '|'
        	<< std::setw(10) << if_to_long(this->contact[i].get_ln()) << '|'
        	<< std::setw(10) << if_to_long(this->contact[i].get_nn()) << '|'
        	<< std::endl;
		i++;
	}
}