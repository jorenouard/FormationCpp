#include "contact.hpp"
#include <iostream>
#include <string>

Contact::Contact (std::string firstName, std::string lastName, std::string nickname, std::string phoneNumber, std::string darkestSecret)
: firstName(firstName), lastName(lastName), nickname(nickname), phoneNumber(phoneNumber), darkestSecret(darkestSecret)
{

}

std::string Contact::getFirstName()
{
    return this->firstName;
}

std::string Contact::getPhoneNumber()
{
    return this->phoneNumber;
}