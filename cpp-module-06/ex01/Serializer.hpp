# ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <stdint.h>
#include <iostream>

using std::cout;
using std::endl;

typedef struct s_data
{
    int drena;
    int macaquinho;
    std::string ola;
} Data;

class Serializer
{
private:

public:
    static uintptr_t serialize(Data* ptr);
    static Data *deserialize(uintptr_t raw);
};

# endif