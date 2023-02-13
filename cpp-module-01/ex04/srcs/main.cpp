#include "../includes/replace.hpp"

int main(int argc, char const *argv[])
{
	if (argc != 4)
	{
		cerr << "Wrong amout of arguments!" << endl;
		return 1;
	}
	Replace replace(argv[1]);
	replace.execute(argv[2], argv[3]);
	return 0;
}
