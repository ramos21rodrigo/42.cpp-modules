#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	std::cout << "\e[0;33mDefault Constructor called of ScalarConverter\e[0m" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &copy)
{
	*this = copy;
	std::cout << "\e[0;33mCopy Constructor called of ScalarConverter\e[0m" << std::endl;
}

ScalarConverter::~ScalarConverter()
{
	std::cout << "\e[0;31mDestructor called of ScalarConverter\e[0m" << std::endl;
}

ScalarConverter & ScalarConverter::operator=(const ScalarConverter &assign)
{
	if (this == &assign) return *this;
	return *this;
}

void print(float convert){
	
	const char char_value = static_cast<char>(convert);
	const long long_value = static_cast<long>(convert);
	bool end_in_zero = static_cast<int>(convert) - convert == 0;

	cout << "char: ";
	if (convert < CHAR_MIN || convert > CHAR_MAX || std::isnan(convert))
		cout << "impossible" << endl;
	else if (!isprint(convert))
		cout << "Non displayable" << endl;
	else
		cout << char_value << endl;


	cout << "int: ";
	if (long_value < INT_MIN || long_value > INT_MAX || std::isnan(convert))
		cout << "impossible" << endl;
	else
		cout << long_value << endl;

	cout << "float: " << convert;
	if (end_in_zero)
		cout << ".0";
	cout << "f" << endl;

	cout << "double: " << static_cast<double>(convert);
	if (end_in_zero)
		cout << ".0";
	cout << endl;

}

void print(double convert){
	const char char_value = static_cast<char>(convert);
	const long long_value = static_cast<long>(convert);
	bool end_in_zero = static_cast<int>(convert) - convert == 0;

	cout << "char: ";
	if (convert < CHAR_MIN || convert > CHAR_MAX || isnan(convert))
		cout << "impossible" << endl;
	else if (!isprint(convert))
		cout << "Non displayable" << endl;
	else
		cout << char_value << endl;


	cout << "int: ";
	if (long_value < INT_MIN || long_value > INT_MAX || isnan(convert))
		cout << "impossible" << endl;
	else
		cout << long_value << endl;


	cout << "float: " << static_cast<float>(convert);
	if (end_in_zero)
		cout << ".0";
	cout << "f" << endl;

	cout << "double: " << convert;
	if (end_in_zero)
		cout << ".0";
	cout << endl;
}

void print(int convert){

	const char char_value = static_cast<char>(convert);

	cout << "char: ";
	if (convert < CHAR_MIN || convert > CHAR_MAX)
		cout << "impossible" << endl;
	else if (!isprint(convert))
		cout << "Non displayable" << endl;
	else
		cout << char_value << endl;

	cout << "int: " << static_cast<int>(convert) << endl;
	cout << "float: " << static_cast<float>(convert) << ".0f" << endl;
	cout << "double: " << static_cast<double>(convert) << ".0" << endl;

}

void print(char convert){
	cout << "char: " << convert << endl;
	cout << "int: " << static_cast<int>(convert) << endl;
	cout << "float: " << static_cast<float>(convert) << ".0f" << endl;
	cout << "double: " << static_cast<double>(convert) << ".0" << endl;
}

bool is_double(const string &str)
{
    return (str.find_first_not_of("0123456789.-") == string::npos && str.find(".") != string::npos
		&& (str.find("-") == 0 || str.find("-") == string::npos))
		|| ( str == "-inf" || str == "+inf" || str == "nan");
}

bool is_float(const string &str)
{
    return (str.find_first_not_of("0123456789.f-") == string::npos && str.find(".") != string::npos
		&& str.find("f", str.length() - 1)!= string::npos && (str.find("-") == 0 || str.find("-") == string::npos))
		|| ( str == "-inff" || str == "+inff" || str == "nanf") ;
}

bool is_int(const string &str)
{
    return str.find_first_not_of("0123456789.-") == string::npos && ((str.find("-") == 0 && str.length() > 1 ) || str.find("-") == string::npos);
}

void ScalarConverter::convert(string convert)
{
	double convert_to_d;

	if (is_float(convert))
		print(std::atof(convert.c_str()));
	else if (is_double(convert))
	{
		convert_to_d = std::atof(convert.c_str());
		print(convert_to_d);
	}
	else if (is_int(convert))
		print(std::atoi(convert.c_str()));
	else if (convert.length() == 1)
		print(convert[0]);
	else
	{
		cout << "char: impossible" << endl;
		cout << "int: impossible" << endl;
		cout << "float: impossible" << endl;
		cout << "double: impossible" << endl;
	}
}

