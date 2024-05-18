#ifndef __PHONEBOOK__
    #define __PHONEBOOK__
    #include <string>
    #include "contact.hpp"

    class PhoneBook
    {
        public:
            PhoneBook();
            ~PhoneBook();

            add(std::string firstName, std::string lastName, std::string nickname, std::string phoneNumber, std::string darkestSecret);
            search();

        private:
            std::vector ;
    };

#endif