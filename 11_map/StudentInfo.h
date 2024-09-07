#pragma once

#include <string>

using std::string;

namespace samples
{
    class StudentInfo
    {
    public:
        StudentInfo(const string &name, const string &studentId);

        const string &GetName() const;
        void SetName(const string &name);

        const string &GetStudentId() const;
        void SetStudentId(const string &studentID);

        bool operator<(const StudentInfo &rhs) const;

    private:
        string mName;
        string mStudentId;
    };
}
