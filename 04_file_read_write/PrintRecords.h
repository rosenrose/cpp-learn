#pragma once

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::ios_base;
using std::string;

struct Record
{
    string FirstName;
    string LastName;
    string StudentId;
    string Score;
};

namespace samples
{
    Record ReadRecord(std::istream &stream, const bool isPrompt);
    void WriteRecord(std::fstream &stream, const Record &record);
    void DisplayRecords(std::fstream &fileStream);
    void ManageRecords();
}
