#include <iostream>
#include "Human.h"

using std::cout;
using std::endl;

namespace samples
{
    Human::Human(const char *name)
        : mName(name)
    {
    }

    void Human::SayName() const
    {
        cout << "My name is " << mName << endl;
    }
}
