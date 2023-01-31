#ifndef REPLACE_HPP
#define REPLACE_HPP

#include "main.hpp"

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