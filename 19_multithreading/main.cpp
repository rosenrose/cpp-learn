#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>

using std::cout;
using std::endl;
using std::mutex;
using std::scoped_lock;

static mutex sMutex;
static int sNum = 10;

void Multiply(const int rhs)
{
    scoped_lock<mutex> lock(sMutex);
    cout << "Excuting multiply" << endl
         << endl;

    sNum *= rhs;
}

void SlowAdd(const int rhs)
{
    {
        scoped_lock<mutex> lock(sMutex);
        cout << "Excuting slow add" << endl
             << endl;
    }

    std::this_thread::sleep_for(std::chrono::seconds(1));

    {
        scoped_lock<mutex> lock(sMutex);
        cout << "Adding" << endl
             << endl;
        sNum += rhs;
    }
}

int main()
{
    cout << "sNum: " << sNum << endl;

    std::thread t1(SlowAdd, 3);

    Multiply(7);

    if (t1.joinable())
    {
        {
            scoped_lock<mutex> lock(sMutex);
            cout << "t1 is joinable" << endl
                 << endl;
        }

        t1.join();
    }

    cout << "sNum: " << sNum << endl;
    sNum = 20;

    std::thread t2(SlowAdd, 50);

    if (t2.joinable())
    {
        {
            scoped_lock<mutex> lock(sMutex);
            cout << "t2 is joinable" << endl
                 << endl;
        }

        t2.join();
    }

    Multiply(100);

    cout << "sNum: " << sNum << endl;

    return 0;
}