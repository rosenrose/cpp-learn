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
    v2.Add(v4);

    cout << v1.GetX() << ", " << v1.GetY() << endl;
    cout << v2.GetX() << ", " << v2.GetY() << endl;

    return 0;
}
