#include <iostream>
#include <map>
#include "StudentInfo.h"
#include "StudentInfo2.h"
#include "StudentInfo2Comparer.h"

using samples::StudentInfo;
using samples::StudentInfo2;
using std::cout;
using std::endl;
using std::map;
using std::pair;

int main()
{
    map<StudentInfo, int> scores1;
    scores1.insert(pair<StudentInfo, int>(StudentInfo("Lulu", "A01234567"), 10));
    scores1.insert(pair<StudentInfo, int>(StudentInfo("Poppy", "B12345678"), 70));
    scores1.insert(pair<StudentInfo, int>(StudentInfo("Lulu", "cccc"), 50));

    for (const pair<const StudentInfo, int> &score : scores1)
    {
        cout << score.first.GetName() << " [" << score.first.GetStudentId() << "]: " << score.second << endl;
    }
    cout << endl;

    map<StudentInfo2, int, samples::StudentInfo2Comparer> scores2;
    scores2.insert(pair<StudentInfo2, int>(StudentInfo2("Lulu", "A01234567"), 10));
    scores2.insert(pair<StudentInfo2, int>(StudentInfo2("Poppy", "B12345678"), 70));
    scores2.insert(pair<StudentInfo2, int>(StudentInfo2("Lulu", "cccc"), 50));

    for (const pair<const StudentInfo2, int> &score : scores2)
    {
        cout << score.first.GetName() << " [" << score.first.GetStudentId() << "]: " << score.second << endl;
    }

    return 0;
}
