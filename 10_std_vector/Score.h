#pragma once

#include <string>

namespace samples
{
    class Score
    {
    public:
        Score(const int score, const std::string &className);

        int GetScore() const;
        void SetScore(const int score);

        const std::string &GetClassName() const;

        void Print() const;

    private:
        int mScore;
        std::string mClassName;
    };
}
