#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>

using std::cout;
using std::endl;
using std::mutex;
using std::scoped_lock;
using std::unique_lock;

static mutex sMutex;
static std::condition_variable sEvent;
static int sSeconds;
static int sResetCnt = 0;

constexpr int MAX_SECONDS = 3;
constexpr int MAX_RESET_CNT = 5;

void Timer()
{
    while (sResetCnt < MAX_RESET_CNT)
    {
        {
            scoped_lock<mutex> lock(sMutex);
            cout << "seconds: " << sSeconds << endl;
        }

        std::this_thread::sleep_for(std::chrono::seconds(1));

        {
            unique_lock<mutex> lock(sMutex);
            sSeconds++;

            sEvent.notify_one();
        }
    }
}

void Resetter()
{
    while (sResetCnt < MAX_RESET_CNT)
    {
        unique_lock<mutex> lock(sMutex);
        sEvent.wait(lock, []()
                    { return !(sSeconds < MAX_SECONDS); });

        sSeconds = 0;
        sResetCnt++;
        cout << "Reset count: " << sResetCnt << endl;
    }
}

int main()
{
    std::thread timer(Timer);
    std::thread restter(Resetter);

    restter.join();
    timer.join();

    return 0;
}
