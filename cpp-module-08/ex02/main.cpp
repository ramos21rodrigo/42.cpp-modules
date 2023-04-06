#include "mutantstack.hpp"

void stack()
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);
	cout << mstack.top() << endl;

	mstack.pop();
	cout << mstack.size() << endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;

	while (it != ite)
	{
		cout << *it << endl;
		++it;
	}
	std::stack<int> s(mstack);
}

void list()
{
	std::list<int> list;

	list.push_back(5);
	list.push_back(17);
	cout << list.back() << endl;

	list.pop_back();
	cout << list.size() << endl;

	list.push_back(3);
	list.push_back(5);
	list.push_back(737);
	list.push_back(0);

	std::list<int>::iterator it = list.begin();
	std::list<int>::iterator ite = list.end();
	++it;
	--it;

	while (it != ite)
	{
		cout << *it << endl;
		++it;
	}
	std::list<int> s(list);
}

int main()
{
	stack();
	cout << endl << "Same code but with list" << endl << endl;
	list();
}
