#include "iter.hpp"

int main() {

	int num[5] = {0, 1, 2, 3, 4 };    
	string str[4] = {"how", "are", "you", "?"};
	char strnum[6] = "01234";

	iter(num, 5, print);
	iter(str, 5, print);
	iter(strnum, 4, print);

	return 0;
}