#include <iostream>
#include "Vector.h"

using std::cout;

int main()
{
    Vector v1;
    Vector v2(2, 5);

    Vector v3 = Vector();
    Vector v4 = Vector(11, 90);

    v1.SetX(30);
    v1.SetY(37);
    v3.Add(v4);

    cout << "v1: ";
    v1.Print();

    cout << "v2: ";
    v2.Print();

    cout << "v3: ";
    v3.Print();

    cout << "v4: ";
    v4.Print();

    Vector v5 = v1.Multiply(v2);
    cout << "v5: ";
    v5.Print();

    v2.Scale(3);
    cout << "v2: ";
    v2.Print();

    v4.Scale(v2);
    cout << "v4: ";
    v4.Print();

    return 0;
}
