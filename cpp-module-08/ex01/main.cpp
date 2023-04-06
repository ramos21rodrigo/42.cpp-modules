#include "Span.hpp"

// int main()
// {
// 	Span sp = Span(5);
// 	sp.addNumber(6);
// 	sp.addNumber(3);
// 	sp.addNumber(17);
// 	sp.addNumber(9);
// 	sp.addNumber(11);

// 	std::cout << sp.shortestSpan() << std::endl;
// 	std::cout << sp.longestSpan() << std::endl;

// 	return 0;
// }

int main(void)
{

	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	try
	{
		sp.addNumber(-1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << endl << endl;
	}
	
	cout << sp.shortestSpan() << endl;
	cout << sp.longestSpan() << endl << endl;

	Span sp2 = Span(10000);
	sp2.seed(10000);

	cout << sp2.shortestSpan() << endl;
	cout << sp2.longestSpan() << endl;

	return 0;
}