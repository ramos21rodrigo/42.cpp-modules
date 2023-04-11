#pragma once

#include <iostream>
#include <vector>
#include <deque>
#include <string>
#include <sstream>
#include <algorithm>
#include <time.h>

using std::cout;
using std::endl;

void parseInput(std::string input);

class PmergeMe
{
private:
    std::vector<int> _vec;
    std::deque<int> _deque;

    bool contains(const std::vector<int> &vecObj, const int &el);

    void display(const std::vector<int> &container);
    std::vector<int> vectorMergeSort(std::vector<int> temp);
    std::deque<int> dequeMergeSort(std::deque<int> temp);

public:
    PmergeMe(int argc, char *argv[]);
    void sortVector();
    void sortDeque();

    class InvalidException : public std::exception
    {
    public:
        virtual const char *what() const throw();
    };
};