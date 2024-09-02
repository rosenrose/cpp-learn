#include <iostream>
#include "Vector.h"

using std::cout;
using std::endl;

int main()
{
    Vector v1;
    Vector v2(2, 5);

    Vector v3 = Vector();
    Vector v4 = Vector(11, 90);

    v1.SetX(30);
    v1.SetY(37);
    v3 += v4;

    cout << std::boolalpha << (v3 == v3) << endl;

    cout << "v1: " << v1 << endl;
    cout << "v2: " << v2 << endl;
    cout << "v3: " << v3 << endl;
    cout << "v4: " << v4 << endl;

    Vector v5 = v1 * v2;
    cout << "v5: " << v5 << endl;

    v2 *= 3;
    cout << "v2: " << v2 << endl;

    v4 *= v2;
    cout << "v4: " << v4 << endl;

    cout << "2 * v1: " << 2 * v1 << endl;

    return 0;
}
