#include "../includes/main.hpp"

int main(int argc, char const *argv[])
{
	if (argc != 4)
	{
		cerr << "Wrong amout of arguments!" << endl;
		return EXIT_FAILURE;
	}
	Replace replace(argv[1]);
	replace.execute(argv[2], argv[3]);
	return EXIT_SUCCESS;
}
