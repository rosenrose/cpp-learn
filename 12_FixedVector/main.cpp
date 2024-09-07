#include <iostream>
#include "FixedVector.h"

using std::cout;
using std::endl;

int main()
{
    samples::FixedVector<int, 5> a;
    a.Add(1);
    a.Add(2);

    cout << a.GetSize() << ", " << a.GetCapacity() << endl;

    return 0;
}
