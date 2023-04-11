#include "RPN.hpp"

int main(int argc, char const *argv[])
{

    if (argc != 2)
    {
        cout << "Invalid amount of arguments" << endl;
        return 1;
    }

    try
    {
        RPN rpn;
        cout << rpn.getResult(std::string(argv[1])) << endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << endl;
    }

    return 0;
}
