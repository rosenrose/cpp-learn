#pragma once

#include "StudentInfo2.h"

namespace samples
{
    class StudentInfo2Comparer
    {
    public:
        bool operator()(const StudentInfo2 &lhs, const StudentInfo2 &rhs) const
        {
            if (lhs.GetName() == rhs.GetName())
            {
                return lhs.GetStudentId() < rhs.GetStudentId();
            }

            return lhs.GetName() < rhs.GetName();
        }
    };
}
