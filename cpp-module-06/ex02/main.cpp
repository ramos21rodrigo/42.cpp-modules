#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void)
{
	srand(time(NULL));
	char c = "ABC"[rand() % 3];

	cout << "Type " << c << " created!" << endl;
	switch (c)
	{
	case 'A':
		return new A;
	case 'B':
		return new B;
	case 'C':
		return new C;
	}
	return NULL;
}

void identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		cout << "Pointer is type A." << endl;
	else if (dynamic_cast<B *>(p))
		cout << "Pointer is type B." << endl;
	else if (dynamic_cast<C *>(p))
		cout << "Pointer is type C." << endl;
	else
		cout << "Cannot identify pointer type." << endl;
}

void identify(Base &p)
{
	try
	{
		A &a = dynamic_cast<A &>(p);
		(void)a;
		cout << "Reference is type A." << endl;
	}
	catch (std::exception &exception)
	{
		try
		{
			B &b = dynamic_cast<B &>(p);
			(void)b;
			cout << "Reference is type B." << endl;
		}
		catch (std::exception &exception)
		{
			try
			{

				C &c = dynamic_cast<C &>(p);
				(void)c;
				cout << "Reference is type C." << endl;
			}
			catch (std::exception &exception)
			{

				cout << "Cannot identify pointer type." << endl;
			}
		}
	}
}

int main()
{
	Base *type = generate();

	identify(type);
	identify(*type);

	delete type;
	return 0;
}
