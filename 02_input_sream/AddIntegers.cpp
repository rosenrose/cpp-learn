#include <iostream>
#include "AddIntegers.h"

using std::cin;
using std::cout;
using std::endl;

namespace samples
{
    void AddIntegers()
    {
        int num;
        int sum = 0;

        while (true)
        {
            cout << "Enter a number: ";
            cin >> num;

            if (cin.eof())
            {
                break;
            }

            if (cin.fail())
            {
                cout << "Invalid input" << endl;
                cin.clear();
                cin.ignore(LLONG_MAX, '\n');
                continue;
            }

            sum += num;
        }

        cin.clear();
        cout << "Sum: " << sum << endl;
    }
}
