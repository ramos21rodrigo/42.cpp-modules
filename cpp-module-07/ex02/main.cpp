#include "Array.hpp"

int main()
{

	unsigned size = 4;
	std::string s[] = {"how", "you", "doin'", "?"};

	Array<int> ints(1);
	Array<std::string> strings(size);

	cout << endl;

	try
	{
		cout << "Ints size: " << ints.size() << endl;
		cout << "ints[10]: " << ints[10] << endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	cout << endl;

	for (unsigned int i = 0; i < ints.size(); i++)
	{
		ints[i] = i;
		strings[i] = s[i];
	}

	cout << "Ints: ";
	for (unsigned int i = 0; i < ints.size(); i++)
		cout << ints[i] << " ";
	cout << endl;

	cout << "String: ";
	for (unsigned int i = 0; i < strings.size(); i++)
		cout << strings[i] << " ";
	cout << endl;

	cout << endl;
	Array<int> copy_ints(ints);

	cout << "Copy ints: ";
	for (unsigned int i = 0; i < ints.size(); i++)
	{
		cout << copy_ints[i];
	}
	cout << endl;
	cout << endl;

	Array<std::string> strings2 = strings;
	cout << "String assing: ";
	for (unsigned int i = 0; i < strings.size(); i++)
		cout << strings[i] << " ";
	cout << endl;
	cout << endl;

	return 0;
}