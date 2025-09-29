#include "Contact.hpp"

Contact::Contact()
{
    return;
}

Contact::~Contact()
{
    return;
}

void Contact::setContact(std::string fn, std::string ln,
                         std::string nn, std::string pn, std::string ds)
{
    this->first_name = fn;
    this->last_name = ln;
    this->nickname = nn;
    this->phone_number = pn;
    this->darkest_secret = ds;
}

std::string Contact::get_fn()
{
    return(first_name);
}
std::string Contact::get_ln()
{
    return(last_name);
}
std::string Contact::get_nn()
{
    return(nickname);
}
std::string Contact::get_pn()
{
    return(phone_number);
}
std::string Contact::get_ds()
{
    return(darkest_secret);
}

// std::string if_to_long(std::string string)
// {
//     if(string.length() > 10)
//         return(string.substr(0.9) + ".");
//     return (string);
// }

// void Contact::displaycontact(int index)
// {
//     std::cout 
//         << std::setw(10) << index << '|' 
//         << std::setw(10) << if_to_long(first_name) << '|'
//         << std::setw(10) << if_to_long(last_name) << '|'
//         << std::setw(10) << if_to_long(nickname) << '|'
//         << std::endl;
// }