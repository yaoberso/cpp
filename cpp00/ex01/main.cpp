#include "Contact.hpp"
#include "phonebook.hpp"
#include <string>

int main()
{
	PhoneBook phonebook;
	std::string output;
	while(1)
	{
		std::getline(std::cin, output);
		if (output == "ADD")
		{
			phonebook.set_pn_contact();
		}
		else if (output == "SEARCH")
		{
			phonebook.display_contact();
		}
		else if (output == "EXIT")
		{
			return (0);
		}
		else
		{
			std::cout << "Error: command not recognized. Please use ADD, SEARCH or EXIT." << std::endl;
		}
	}
}