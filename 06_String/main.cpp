#include "String.h"

int main()
{
    samples::String a("hello");
    samples::String *b = new samples::String(a);

    b->Print();
    delete b;

    a.Print();

    return 0;
}
