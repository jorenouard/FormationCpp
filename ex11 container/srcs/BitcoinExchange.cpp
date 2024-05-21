#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(std::string csvName) : csvName(csvName)
{
    std::cout << "Object of class BitcoinExchange created." << std::endl;
}

BitcoinExchange::~BitcoinExchange()
{
    std::cout << "Object of class BitcoinExchange destructed." << std::endl;
}

void BitcoinExchange::readInternalDataBase(std::ifstream& internal_db)
{
    std::string line;
    size_t delim;

    // skip first line
    std::getline(internal_db, line);
    while (std::getline(internal_db, line))
    {
        delim = line.find(',');
        std::string rate = line.substr(delim + 1);
        // set a new pair on the map <date, rate>
        this->dataBase[line.substr(0, delim)] = ft_stof(rate);
    }
    internal_db.close();
}