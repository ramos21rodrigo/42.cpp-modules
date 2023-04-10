#pragma once

#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <sstream>
#include <stdio.h>

using std::cout;
using std::endl;

class Btc
{
private:
    std::map<std::string, float> _data;

public:
    Btc();
    ~Btc();
    Btc &operator=(Btc const &var);
    Btc(Btc const &var);

    float getFromDate(const std::string &date);
    void isValidDate(const std::string &date);

    class NegativeException : public std::exception
    {
    public:
        virtual const char *what() const throw();
    };

    class TooBigException : public std::exception
    {
    public:
        virtual const char *what() const throw();
    };

    class WrongDateExceptionEmpty : public std::exception
    {
    public:
        virtual const char *what() const throw();
    };
};

std::string trim(std::string &str);
