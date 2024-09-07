#pragma once

#include <string>

using std::string;

namespace samples
{
    class StudentInfo2
    {
    public:
        StudentInfo2(const string &name, const string &studentId);

        const string &GetName() const;
        void SetName(const string &name);

        const string &GetStudentId() const;
        void SetStudentId(const string &studentID);

    private:
        string mName;
        string mStudentId;
    };
}
