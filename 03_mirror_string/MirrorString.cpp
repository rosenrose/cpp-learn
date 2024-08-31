#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

namespace samples
{
    void MirrorString()
    {
        string line = "Hello World!";
        const size_t len = line.size();

        cout << line.capacity() << ", " << (void *)line.c_str() << endl;

        line.reserve(len * 2 + 1);
        cout << line.capacity() << ", " << (void *)line.c_str() << endl;

        for (int i = len - 1; i >= 0; i--)
        {
            line += line[i];
        }

        cout << line << endl
             << line.capacity() << ", " << (void *)line.c_str() << endl;
    }
}
