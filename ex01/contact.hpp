#ifndef __CONTACT__
    #define __CONTACT__
    #include <string>

    class Contact
    {
        public:
            Contact(std::string firstName, std::string lastName, std::string nickName, int number, std::string darkestSecret);
            void searchContact(const std::string firstName);
        private:
            std::string firstName;
            std::string lastName;
            std::string nickName;
            int number;
            std::string darkestSecret;

    };

#endif