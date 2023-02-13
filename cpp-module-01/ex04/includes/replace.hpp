#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <string>
#include <iostream>
#include <fstream>

using std::cerr;
using std::cout;
using std::endl;
using std::getline;
using std::string;

class Replace
{
private:
	string _filename;

public:
	Replace(string filename);
	~Replace();

	void execute(string s1, string s2);
};

#endif