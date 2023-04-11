#include "PmergeMe.hpp"

bool PmergeMe::contains(const std::vector<int> &vecObj, const int &el)
{
    std::vector<int>::const_iterator it = std::find(vecObj.begin(), vecObj.end(), el);
    return it != vecObj.end();
}

void PmergeMe::display(const std::vector<int> &container)
{
    for (std::vector<int>::const_iterator it = container.begin(); it != container.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
}

PmergeMe::PmergeMe(int argc, char *argv[])
{
    for (int i = 1; i < argc; ++i)
    {
        if (std::string(argv[i]).find_first_not_of("0123456789") != std::string::npos)
            throw InvalidException();
        int value = atoi(argv[i]);
        if (contains(_vec, value))
            throw InvalidException();
        _vec.push_back(value);
        _deque.push_back(value);
    }

    cout << "Before: ";
    this->display(_vec);

    clock_t start = clock();
    this->sortVector();
    clock_t end = clock();
    double time = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000;

    cout << "After:  ";
    this->display(_vec);

    cout << "Time to process a range of " << _vec.size() << " elements with std::vector: " << time << endl;

    start = clock();
    this->sortVector();
    end = clock();
    time = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000;

    cout << "Time to process a range of " << _deque.size() << " elements with std::deque: " << time << endl;
}

std::vector<int> PmergeMe::vectorMergeSort(std::vector<int> temp)
{
    if (temp.size() <= 1)
        return temp;

    int mid = temp.size() / 2;
    std::vector<int> left(temp.begin(), temp.begin() + mid);
    std::vector<int> right(temp.begin() + mid, temp.begin() + temp.size());

    left = vectorMergeSort(left);
    right = vectorMergeSort(right);

    unsigned i = 0;
    unsigned j = 0;
    unsigned k = 0;

    while (i < left.size() && j < right.size())
    {
        if (left[i] < right[j])
        {
            temp[k] = left[i];
            i++;
        }
        else
        {
            temp[k] = right[j];
            j++;
        }
        k++;
    }

    while (i < left.size())
    {
        temp[k] = left[i];
        i++;
        k++;
    }

    while (j < right.size())
    {
        temp[k] = right[j];
        j++;
        k++;
    }

    return temp;
}

std::deque<int> PmergeMe::dequeMergeSort(std::deque<int> temp)
{
    if (temp.size() <= 1)
        return temp;

    int mid = temp.size() / 2;
    std::deque<int> left(temp.begin(), temp.begin() + mid);
    std::deque<int> right(temp.begin() + mid, temp.begin() + temp.size());

    left = dequeMergeSort(left);
    right = dequeMergeSort(right);

    unsigned i = 0;
    unsigned j = 0;
    unsigned k = 0;

    while (i < left.size() && j < right.size())
    {
        if (left[i] < right[j])
        {
            temp[k] = left[i];
            i++;
        }
        else
        {
            temp[k] = right[j];
            j++;
        }
        k++;
    }

    while (i < left.size())
    {
        temp[k] = left[i];
        i++;
        k++;
    }

    while (j < right.size())
    {
        temp[k] = right[j];
        j++;
        k++;
    }

    return temp;
}

void PmergeMe::sortVector()
{
    _vec = vectorMergeSort(_vec);
}

void PmergeMe::sortDeque()
{
    _deque = dequeMergeSort(_deque);
}

const char *PmergeMe::InvalidException::what() const throw()
{
    return "Error";
}
