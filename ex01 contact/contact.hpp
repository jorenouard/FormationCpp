#ifndef __CONTACT__
    #define __CONTACT__
    #include <string>

    class Contact
    {
        public:
            Contact(std::string firstName, std::string lastName, std::string nickname, std::string phoneNumber, std::string darkestSecret);
            //~Contact();

            std::string getFirstName();
            std::string getPhoneNumber();

        private:
            std::string firstName;
            std::string lastName;
            std::string nickname;
            std::string phoneNumber;
            std::string darkestSecret;

    };

#endif