#include <iostream>
#include <cassert>
#include "String.h"

using samples::String;
using std::cout;
using std::endl;

String MakeString()
{
    return String("temp");
}

int main()
{
    String a("hello");
    String *b = new String("foo");
    String c = a;

    cout << "b: " << *b << endl;
    c = *b;
    delete b;

    cout << "a: " << a << endl;
    cout << "c: " << c << endl;

    String d(std::move(a));

    assert(a.GetString() == nullptr);
    assert(a.GetSize() == 0);
    cout << "d: " << d << endl;

    d = MakeString();

    cout << "d: " << d << endl;

    return 0;
}
