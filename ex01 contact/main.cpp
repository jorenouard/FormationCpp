#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include "contact.hpp"

int main()
{
    std::string action = "";
    std::vector<Contact> phoneBook{};

    while (action != "exit")
    {
        std::cout << "What is the action" << std::endl;
        std::cin >> action;

        if (action == "add")
        {
            std::cout << "Please provide the information like this:" << std::endl;
            std::cout << "first name, last name,nickname,phone number (ex: 0606060606),darkest secret." << std::endl;
            std::string newContact;
            std::cin >> newContact;
            std::stringstream sstream(newContact);
            std::vector<std::string> words{};

            std::string word;
            while (std::getline(sstream, word, ','))
            {
                words.push_back(word);
            }
            
            std::string firstName = words[0];
            std::string lastName = words[1];
            std::string nickname = words[2];
            std::string phoneNumber = words[3];
            std::string darkestSecret = words[4];

            Contact contact(firstName, lastName, nickname, phoneNumber, darkestSecret);
            if (phoneBook.size() < 7)
            {
                phoneBook.push_back(contact);
            }
            else
            {
                std::cout << "phonebook max size" << std::endl;
            }
        }

        else if (action == "search")
        {
            std::cout << "Enter first name of contact" << std::endl;
            std::string searchFirstName;
            std::cin >> searchFirstName;
            for (unsigned int i = 0; i < (phoneBook.size()); i++)
            {
                if (phoneBook[i].getFirstName() == searchFirstName)
                {
                    std::cout << "the phone number is " << phoneBook[i].getPhoneNumber() << std::endl;
                }
            }
        }

        else if (action == "exit")
        {
            std::cout << "Have a nice day." << std::endl;
            return 0;
        }

        else
        {
            std::cout << "Please write \"add\", \"search\" or \"exit\"" << std::endl;
        }
    }
    
    return 0;
}