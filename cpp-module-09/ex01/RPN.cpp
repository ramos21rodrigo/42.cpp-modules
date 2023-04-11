#include "RPN.hpp"

RPN::RPN() {}

RPN::~RPN() {}

RPN::RPN(const RPN &var)
{
	*this = var;
}

RPN &RPN::operator=(const RPN &var)
{
	this->_numbers = var._numbers;
	return (*this);
}

double RPN::calculate(char op)
{
	double x = _numbers.top();
	_numbers.pop();
	double y = _numbers.top();
	_numbers.pop();

	switch (op)
	{
	case '+':
		return y + x;
	case '-':
		return y - x;
	case '*':
		return y * x;
	case '/':
		return y / x;
	default:
		throw InvalidInputExcpetion();
	}
}

double RPN::getResult(std::string input)
{
	for (size_t i = 0; i < input.size(); i++)
	{
		if (input[i] == ' ')
			continue;

		if (isdigit(input[i]))
		{
			_numbers.push(input[i] - '0');
			continue;
		}

		if (_numbers.size() < 2)
			throw InvalidInputExcpetion();

		_numbers.push(this->calculate(input[i]));
	}

	if (_numbers.size() == 1)
		return _numbers.top();
	throw InvalidInputExcpetion();
}

const char *RPN::InvalidInputExcpetion::what() const throw()
{
	return "Error!";
}
