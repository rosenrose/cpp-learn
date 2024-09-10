#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int i = 1;
    double d = 3.14;
    char c = 'g';

    auto noCapture = []()
    { cout << "No capture" << endl; };

    auto captureByValue = [=]()
    {
        cout << "captureByValue" << endl;
        cout << i << endl;
        cout << d << endl;
        cout << c << endl;
        cout << endl;
    };

    auto captureByRef = [&]()
    {
        cout << "captureByRef" << endl;
        cout << ++i << endl;
        cout << ++d << endl;
        cout << ++c << endl;
        cout << endl;
    };

    auto captureByMix = [=, &d, &c]()
    {
        cout << "captureByMix" << endl;
        cout << i << endl;
        cout << --d << endl;
        cout << --c << endl;
        cout << endl;
    };

    auto captureByValueMutable = [=]() mutable
    {
        cout << "captureByValueMutable" << endl;
        cout << "i: " << i << endl;
        i = 99;
    };

    i = 30;
    d = 77.99;
    c = 'x';

    noCapture();
    captureByValue();
    captureByRef();
    captureByMix();
    captureByValueMutable();
    cout << i << endl;

    return 0;
}