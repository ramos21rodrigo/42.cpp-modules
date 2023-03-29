#include "Serializer.hpp"

int main()
{
	Data data_ptr;

	data_ptr.drena = 1;
	data_ptr.macaquinho = 42;
	data_ptr.ola = "adeus";

	cout << "Data: " << data_ptr.drena << endl;
	cout << "      " << data_ptr.macaquinho << endl;
	cout << "      " << data_ptr.ola << endl << endl;

	cout << "Size of: " << sizeof(data_ptr) << endl;
	cout << "Deserialized: " << &data_ptr << endl;

	uintptr_t serialized = Serializer::serialize(&data_ptr);
	cout << "Serialized: " << serialized << endl;
	cout << "Deserialized: " << Serializer::deserialize(serialized) << endl;
	cout << "Serialized: " << Serializer::serialize(&data_ptr) << endl;

	cout << endl << "Data: " << data_ptr.drena << endl;
	cout << "      " << data_ptr.macaquinho << endl;
	cout << "      " << data_ptr.ola << endl;

	return 0;
}
