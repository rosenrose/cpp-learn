#include "Cat.h"

using std::string;

namespace samples
{
    Cat::Cat(const int age)
        : Animal(age) {}

    string Cat::Meow() const
    {
        return string("Meowow");
    }
}
