#include <iostream>
#include "Bat.h"

using std::cout;
using std::endl;

namespace samples
{

    void Bat::Fly() const
    {
        cout << "bat fly" << endl;
    }

    void Bat::Walk() const
    {
        cout << "bat walk" << endl;
    }
}
