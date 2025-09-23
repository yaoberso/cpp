#include "Contact.hpp"

Contact::Contact()
{
    return;
}

Contact::~Contact()
{
    return;
}

void Contact::setContact(int i, std::string fn, std::string ln,
                         std::string nn, std::string pn, std::string ds)
{
    this->index = i;
    this->first_name = fn;
    this->last_name = ln;
    this->nickname = nn;
    this->phone_number = pn;
    this->darkest_secret = ds;
}

std::string if_to_long(std::string string)
{
    if(string.length() > 10)
        return(string.substr(0.9) + ".");
    return (string);
}

void Contact::getContact(int index)
{
    std::cout 
        << std::setw(10) << index << '|' 
        << std::setw(10) << if_to_long(first_name) << '|'
        << std::setw(10) << if_to_long(last_name) << '|'
        << std::setw(10) << if_to_long(nickname) << '|'
        << std::endl;
}