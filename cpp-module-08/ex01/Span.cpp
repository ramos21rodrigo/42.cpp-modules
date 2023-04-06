#include "Span.hpp"

Span::Span(unsigned int n) : _n(n), _vector(new std::vector<int>[_n]()){}

Span::~Span() {
	delete [] _vector;
}

Span::Span(const Span &src){
	cout << "Copy constructor is called." << endl;
	*this = src;
}

Span &Span::operator=(const Span &other) {
	cout << "Assignation operator is called." << endl;

	if (this == &other) return *this;

	delete [] _vector;

	std::vector<int> *temp = new std::vector<int>[other._vector->size()];
	std::copy(other._vector->begin(), other._vector->end(), std::back_inserter(*temp));

	_n = other._n;
	_vector = temp;
	return *this;
}

void Span::addNumber(int number) {
	if (_n == 0)
		throw (LimitReached());
	
	_vector->push_back(number);
	_n -= 1;
}

unsigned int Span::longestSpan() {
	if (_vector->size() <= 1)
		throw (NoSpanToBeFound());

	std::vector<int> newVector(_vector->size(), 0);
	std::adjacent_difference(_vector->begin(), _vector->end(), newVector.begin());

	std::vector<int>::iterator iter;
	for (iter = newVector.begin(); iter != newVector.end(); ++iter)
		*iter = std::abs(*iter);

	return (*std::max_element(newVector.begin() + 1, newVector.end()));
}

unsigned int Span::shortestSpan() {
	if (_vector->size() <= 1)
		throw (NoSpanToBeFound());

	std::vector<int> newVector(_vector->size(), 0);
	std::adjacent_difference(_vector->begin(), _vector->end(), newVector.begin());

	std::vector<int>::iterator iter;
	for (iter = newVector.begin(); iter != newVector.end(); ++iter)
		*iter = std::abs(*iter);

	return (*std::min_element(newVector.begin() + 1, newVector.end()));
}

void Span::seed(unsigned int n) {

	if (n > _n || _n == 0)
		throw (LimitReached());
		
	srand(time(NULL));
	for (unsigned int i = 0; i < n; i++)
		std::back_inserter(*_vector) = rand() % 1000;
	_n -= n;
}
