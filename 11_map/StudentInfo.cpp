#include "StudentInfo.h"

using std::string;

namespace samples
{
    StudentInfo::StudentInfo(const string &name, const string &studentId)
        : mName(name), mStudentId(studentId)
    {
    }

    const string &StudentInfo::GetName() const
    {
        return mName;
    }

    void StudentInfo::SetName(const string &name)
    {
        mName = name;
    }

    const string &StudentInfo::GetStudentId() const
    {
        return mStudentId;
    }

    void StudentInfo::SetStudentId(const string &studentID)
    {
        mStudentId = studentID;
    }

    bool StudentInfo::operator<(const StudentInfo &rhs) const
    {
        if (mName == rhs.mName)
        {
            return mStudentId < rhs.mStudentId;
        }

        return mName < rhs.mName;
    }
}
