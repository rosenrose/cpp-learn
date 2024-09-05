#include <iostream>
#include "Cat.h"

using std::cout;
using std::endl;

namespace samples
{
    Cat::Cat(const int age)
        : Animal(age) {}

    void Cat::Move() const
    {
        cout << "cat move" << endl;
    }

    void Cat::Speak() const
    {
        cout << "Meowow" << endl;
    }
}
