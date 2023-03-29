#include "ScalarConverter.hpp"

int main(int argc, char const *argv[])
{
	if (argc != 2)
	{
		cout << "./convert <parameter>" << endl;
		return 1;
	}

	ScalarConverter::convert(argv[1]);

	return 0;
}
