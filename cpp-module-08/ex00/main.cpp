#include "easyfind.hpp"
#include <vector>
#include <list>

int main(void)
{


	std::vector<int> intVector;
	std::list<int> intList;

	for (int i = 0; i <= 40; i++) {
		intVector.push_back(i);
		intList.push_back(i);
	}
	cout << "Vector:" << endl;
    cout << "[0...40] -> 12: " << easyfind(intVector, 12) << endl;
    cout << "[0...40] -> 40: " << easyfind(intVector, 40) << endl;
	cout << "[0...40] -> 50: " << easyfind(intVector, 50) << endl;

	cout << "List: " << endl;
    cout << "[0...40] -> 12: " << easyfind(intList, 12) << endl;
    cout << "[0...40] -> 40: " << easyfind(intList, 40) << endl;
	cout << "[0...40] -> 50: " << easyfind(intList, 50) << endl;

	return 0;
}
