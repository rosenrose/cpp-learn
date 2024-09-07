#include "StudentInfo2.h"

using std::string;

namespace samples
{
    StudentInfo2::StudentInfo2(const string &name, const string &studentId)
        : mName(name), mStudentId(studentId)
    {
    }

    const string &StudentInfo2::GetName() const
    {
        return mName;
    }

    void StudentInfo2::SetName(const string &name)
    {
        mName = name;
    }

    const string &StudentInfo2::GetStudentId() const
    {
        return mStudentId;
    }

    void StudentInfo2::SetStudentId(const string &studentID)
    {
        mStudentId = studentID;
    }
}
