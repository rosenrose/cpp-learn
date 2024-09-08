#include <iostream>
#include "Pope.h"

using std::cout;
using std::endl;

namespace samples
{
    Pope::Pope()
        : Human::Human("Pope")
    {
    }

    void Pope::SayName() const
    {
        cout << "I'm " << mName << "!!" << endl;
    }
}
