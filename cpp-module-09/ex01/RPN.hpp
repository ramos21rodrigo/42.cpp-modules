#pragma once

#include <iostream>
#include <stack>

using std::cout;
using std::endl;

class RPN
{
private:
	std::stack<double> _numbers;

	double calculate(char op);

public:
	RPN();
	RPN(const RPN &var);
	~RPN();
	RPN &operator=(const RPN &var);

	double getResult(std::string input);

	class InvalidInputExcpetion : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
};