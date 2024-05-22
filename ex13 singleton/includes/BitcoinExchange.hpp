#ifndef __BITCOINEXCHANGE__
#define __BITCOINEXCHANGE__

#include <string>
#include <iostream>

class BitcoinExchange
{
    public:
        BitcoinExchange(std::string csvName);
        ~BitcoinExchange();

    private:
        std::string csvName;
};

#endif