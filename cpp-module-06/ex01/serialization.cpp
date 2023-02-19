#include <stdint.h>
#include <iostream>

using std::cout;
using std::endl;

typedef struct s_data
{
	int drena;
	int macaquinho;
	int ola;
} Data;

uintptr_t serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data *deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}

int main()
{
	Data *data_ptr = new Data;

	cout << "Size of: " << sizeof(data_ptr) << endl;
	cout << "Deserialized: " << data_ptr << endl;

	uintptr_t serialized = serialize(data_ptr);
	cout << "Serialized: " << serialized << endl;
	cout << "Deserialized: " << deserialize(serialized) << endl;
	cout << "Serialized: " << serialize(data_ptr) << endl;

	delete data_ptr;

	return 0;
}
