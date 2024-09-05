#include <iostream>
#include "Cat.h"

using std::cout;
using std::endl;

namespace samples
{
    void Cat::Walk() const
    {
        cout << "cat walk" << endl;
    }
}
