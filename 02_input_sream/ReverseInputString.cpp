#include <iostream>
#include "ReverseInputString.h"

using std::cin;
using std::cout;
using std::endl;

namespace samples
{
    void ReverseInputString()
    {
        const int BUF_SIZE = 512;
        char buf[BUF_SIZE];

        cout << "Enter a string: ";
        cin.getline(buf, BUF_SIZE);

        if (cin.fail())
        {
            cin.clear();
            return;
        }

        size_t len = strlen(buf);

        for (size_t i = 0; i < len / 2; i++)
        {
            char tmp = buf[i];
            buf[i] = buf[len - 1 - i];
            buf[len - 1 - i] = tmp;
        }

        cin.clear();
        cout << "Reversed: " << buf << endl;
    }
}
