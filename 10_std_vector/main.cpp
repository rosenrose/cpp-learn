#include <iostream>
#include <vector>
#include "Score.h"

using samples::Score;
using std::cout;
using std::endl;
using std::vector;

void PrintVector(const vector<Score> &scores)
{
    for (const auto &score : scores)
    {
        score.Print();
    }
}

void PrintVector(const vector<Score *> &scores)
{
    for (const auto *const score : scores)
    {
        score->Print();
    }
}

int main()
{
    vector<Score> scores1;
    scores1.reserve(5);

    scores1.push_back(Score(30, "C++"));
    scores1.push_back(Score(59, "Algorithm"));
    scores1.push_back(Score(87, "Java"));
    scores1.push_back(Score(74, "Data Comm"));
    scores1.push_back(Score(41, "Android"));

    cout << "before Score Vector" << endl;
    PrintVector(scores1);
    cout << endl;

    for (auto it = scores1.begin(); it != scores1.end();)
    {
        if (it->GetClassName() == "Java")
        {
            it = scores1.erase(it);
            continue;
        }

        it++;
    }

    for (auto &score : scores1)
    {
        if (score.GetScore() == 30)
        {
            score.SetScore(100);
        }
    }

    cout << "after" << endl;
    PrintVector(scores1);
    cout << endl;

    vector<Score *> scores2;
    scores2.reserve(5);

    scores2.push_back(new Score(30, "C++"));
    scores2.push_back(new Score(59, "Algorithm"));
    scores2.push_back(new Score(87, "Java"));
    scores2.push_back(new Score(74, "Data Comm"));
    scores2.push_back(new Score(41, "Android"));

    cout << "before Score Pointer Vector" << endl;
    PrintVector(scores2);
    cout << endl;

    for (auto it = scores2.begin(); it != scores2.end();)
    {
        if ((*it)->GetClassName() == "Java")
        {
            it = scores2.erase(it);
            continue;
        }

        it++;
    }

    for (auto *const score : scores2)
    {
        if (score->GetScore() == 30)
        {
            score->SetScore(100);
        }
    }

    cout << "after" << endl;
    PrintVector(scores2);
    cout << endl;

    for (auto *const score : scores2)
    {
        delete score;
    }

    scores2.clear();

    return 0;
}
