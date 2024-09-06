#include <iostream>
#include "Score.h"

using std::cout;
using std::endl;

namespace samples
{
    Score::Score(const int score, const std::string &className)
        : mScore(score), mClassName(className)
    {
    }

    int Score::GetScore() const
    {
        return mScore;
    }

    void Score::SetScore(const int score)
    {
        mScore = score;
    }

    const std::string &Score::GetClassName() const
    {
        return mClassName;
    }

    void Score::Print() const
    {
        cout << "score: " << mScore << ", class: " << mClassName << endl;
    }
}
