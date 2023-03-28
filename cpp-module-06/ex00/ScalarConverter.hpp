#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>

using std::cout;
using std::endl;
using std::string;

class ScalarConverter
{
	private:
		string _convert;
		
	public:
		// Constructors
		ScalarConverter();
		ScalarConverter(string convert);
		ScalarConverter(const ScalarConverter &copy);
		
		// Destructor
		~ScalarConverter();
		
		// Operators
		ScalarConverter & operator=(const ScalarConverter &assign);
		
		
};

#endif