#include "convert.hpp"

float convert_to_float(string argv)
{
	return (atof(argv.c_str()));
}

void print_integer(float float_value)
{
	const long long_value = static_cast<long>(float_value);

	cout << "int: ";
	if (long_value < INT_MIN || long_value > INT_MAX || isnan(float_value))
		cout << "impossible" << endl;
	else
		cout << long_value << endl;
}

void print_char(float float_value)
{
	const char char_value = static_cast<char>(float_value);

	cout << "char: ";
	if (float_value < CHAR_MIN || float_value > CHAR_MAX || isnan(float_value))
		cout << "impossible" << endl;
	else if (!isprint(char_value))
		cout << "Non displayable" << endl;
	else
		cout << char_value << endl;
}

void print_point_numbers(float float_value)
{
	bool end_in_zero = static_cast<int>(float_value) - float_value == 0;

	cout << "float: " << float_value;
	if (end_in_zero)
		cout << ".0";
	cout << "f" << endl;

	cout << "float: " << static_cast<double>(float_value);
	if (end_in_zero)
		cout << ".0";
	cout << endl;
}

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		cout << "./convert <parameter>" << endl;
		return 1;
	}

	float float_value = convert_to_float(argv[1]);

	print_char(float_value);
	print_integer(float_value);
	print_point_numbers(float_value);

	return 0;
}
