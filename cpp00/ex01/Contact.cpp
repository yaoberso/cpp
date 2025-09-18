#include "phonebook.hpp"

void Contact::setContact(int idx, std::string fn, std::string ln, std::string nick, std::string phone, std::string secret)
{
    index = idx;
    first_name = fn;
    last_name = ln;
    nickname = nick;
    phone_number = phone;
    darkest_secret = secret;
}
