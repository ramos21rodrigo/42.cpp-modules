#include "BitcoinExchange.hpp"

std::string trim(std::string &str)
{
    while (str[0] == ' ')
        str.erase(str.begin());
    while (str[str.size() - 1] == ' ')
        str.resize(str.size() - 1);
    return str;
}

Btc::Btc()
{
    std::string line;
    std::string key;
    std::string value;

    std::ifstream file("./data.csv");
    if (!file.is_open())
    {
        cout << "Fail opening file" << endl;
        return;
    }

    while (std::getline(file, line))
    {
        std::stringstream ss(line);

        std::getline(ss, key, ',');
        std::getline(ss, value);

        std::stringstream exchange(value);
        float fvalue;
        exchange >> fvalue;

        try
        {
            _data[key] = fvalue;
        }
        catch (std::exception &a)
        {
            (void)a;
            std::cerr << "Error: could not parse value" << endl;
        }
    }
    file.close();
}

Btc::~Btc()
{
}

Btc &Btc::operator=(Btc const &var)
{
    this->_data = var._data;
    return (*this);
}

Btc::Btc(Btc const &var)
{
    *this = var;
}

void Btc::isValidDate(const std::string &date)
{
    std::string str;
    int year, month, day;
    std::istringstream ss(date);
    int i = 0;

    while (std::getline(ss, str, '-'))
    {
        std::istringstream s(str);
        if (i == 0)
        {
            s >> year;
            if (year < 2009 || year > 2022)
            {
                std::cerr << "Error: bad input => " << date;
                throw WrongDateExceptionEmpty();
            }
        }
        if (i == 1)
        {
            s >> month;
            if (month < 1 || month > 12)
            {
                std::cerr << "Error: bad input => " << date;
                throw WrongDateExceptionEmpty();
            }
        }
        if (i == 2)
        {
            s >> day;
            if ((day < 1 || day > 31) || (day == 31 && (month == 2 || month == 4 || month == 6 || month == 9 || month == 11)) || (day > 28 && month == 2))
            {
                std::cerr << "Error: bad input => " << date;
                throw WrongDateExceptionEmpty();
            }
        }
        i += 1;
    }
    if (i != 3)
    {
        std::cerr << "Error: bad input => " << date;
        throw WrongDateExceptionEmpty();
    }
}

float Btc::getFromDate(const std::string &date)
{

    this->isValidDate(date);

    std::map<std::string, float>::iterator it = _data.lower_bound(date);
    std::pair<std::string, float> p = *(--it);
    return p.second;
}

const char *Btc::NegativeException::what() const throw()
{
    return "Error: not a positive number.";
}

const char *Btc::TooBigException::what() const throw()
{
    return "Error: too large a number.";
}

const char *Btc::WrongDateExceptionEmpty::what() const throw()
{
    return "";
}
