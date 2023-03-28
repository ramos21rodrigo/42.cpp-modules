#include "iter.hpp"

int main() {

	int tab1[5] = {0, 1, 2, 3, 4 };    
	char tab3[6] = "43210";
	string tab4[4] = {"how", "are", "you", "?"};

	iter(tab1, 5, print);
	iter(tab3, 5, print);
	iter(tab4, 4, print);

	return 0;
}