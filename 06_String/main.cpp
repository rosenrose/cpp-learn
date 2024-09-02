#include "String.h"

int main()
{
    samples::String a("hello");
    samples::String *b = new samples::String("foo");
    samples::String c = a;

    b->Print();
    c = *b;
    delete b;

    a.Print();
    c.Print();

    return 0;
}
