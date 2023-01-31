#include "../includes/main.hpp"

Replace::Replace(string filename) : _filename(filename) {}

Replace::~Replace()
{
}

void Replace::execute(string s1, string s2)
{
	std::ifstream in_file;
	std::ofstream out_file;
	size_t s1_in_file_index;
	string line;

	in_file.open(_filename);
	if (!in_file.is_open())
	{
		cerr << "Error opening file!" << endl;
		return;
	}
	out_file.open(_filename + ".replace", std::ios::trunc);
	if (!out_file.is_open())
	{
		cerr << "Error creating replace file!" << endl;
		return;
	}

	while (getline(in_file, line))
	{
		s1_in_file_index = line.find(s1);
		while (s1_in_file_index != string::npos)
		{
			line.erase(s1_in_file_index, s1.size());
			line.insert(s1_in_file_index, s2);
			s1_in_file_index = line.find(s1);
		}
		if (in_file.eof())
			out_file << line;
		else
			out_file << line << endl;
	}

	in_file.close();
	out_file.close();
}