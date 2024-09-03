#pragma once

#include <iostream>
#include <string>

struct Record
{
    std::string FirstName;
    std::string LastName;
    std::string StudentId;
    std::string Score;
};

namespace samples
{
    Record ReadRecord(std::istream &stream, const bool isPrompt);
    void WriteRecord(std::fstream &stream, const Record &record);
    void DisplayRecords(std::fstream &fileStream);
    void ManageRecords();
}
