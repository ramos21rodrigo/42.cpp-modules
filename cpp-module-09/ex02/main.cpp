#include "PmergeMe.hpp"

int main(int argc, char *argv[])
{
    (void)argv;
    if (argc < 2)
    {
        cout << "Invalid amount of arguments" << endl;
        return 1;
    }

    try
    {
        PmergeMe p2m(argc, argv);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}
