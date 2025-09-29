#include "phonebook.hpp"

PhoneBook::PhoneBook()
{
	index = 0;
	contactCount = 0;
	return;
}
PhoneBook::~PhoneBook()
{
	return;
}

void PhoneBook::set_pn_contact()
{
    std::string fn, ln, nn, pn, ds;

    std::cout << "First Name: ";
    std::getline(std::cin, fn);
    if (fn.empty()) 
    {
        std::cout << "Field cannot be empty!" << std::endl;
        return;
    }
    std::cout << "Last Name: ";
    std::getline(std::cin, ln);
    if (ln.empty()) 
    {
        std::cout << "Field cannot be empty!" << std::endl;
        return;
    }
    std::cout << "Nickname: ";
    std::getline(std::cin, nn);
    if (nn.empty()) 
    {
        std::cout << "Field cannot be empty!" << std::endl;
        return;
    }
    std::cout << "Phone Number: ";
    std::getline(std::cin, pn);
    if (pn.empty()) 
    {
        std::cout << "Field cannot be empty!" << std::endl;
        return;
    }
    std::cout << "Darkest Secret: ";
    std::getline(std::cin, ds);
    if (ds.empty()) 
    {
        std::cout << "Field cannot be empty!" << std::endl;
        return;
    }
    this->contact[index].setContact(fn, ln, nn, pn, ds);
    this->index = (this->index + 1) % 8;
    if (contactCount < 8)
        contactCount++;
}


std::string if_to_long(std::string string)
{
    if(string.length() > 10)
        return(string.substr(0, 9) + ".");
    return (string);
}

void PhoneBook::display_contact()
{
	if (contactCount == 0)
    {
        std::cout << "PhoneBook is empty!" << std::endl;
        return;
    }
    std::cout << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname" << std::endl;

    for (int i = 0; i < contactCount; i++)
    {
        std::cout << std::setw(10) << i << "|"
                  << std::setw(10) << if_to_long(this->contact[i].get_fn()) << "|"
                  << std::setw(10) << if_to_long(this->contact[i].get_ln()) << "|"
                  << std::setw(10) << if_to_long(this->contact[i].get_nn())
                  << std::endl;
    }
	std::string input;
    std::cout << "Enter the index of the contact to display: ";
    std::getline(std::cin, input);
    if (input.size() != 1 || !isdigit(input[0]))
    {
        std::cout << "Invalid index!" << std::endl;
        return;
    }

    int idx = input[0] - '0';
    if (idx < 0 || idx >= contactCount)
    {
        std::cout << "Invalid index!" << std::endl;
        return;
    }
    std::cout << "First Name: " << this->contact[idx].get_fn() << std::endl;
    std::cout << "Last Name: " << this->contact[idx].get_ln() << std::endl;
    std::cout << "Nickname: " << this->contact[idx].get_nn() << std::endl;
    std::cout << "Phone Number: " << this->contact[idx].get_pn() << std::endl;
    std::cout << "Darkest Secret: " << this->contact[idx].get_ds() << std::endl;
}