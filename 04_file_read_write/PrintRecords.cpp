#include <fstream>
#include <iomanip>
#include "PrintRecords.h"

namespace samples
{
    Record ReadRecord(std::istream &stream, const bool isPrompt)
    {
        Record record;

        if (isPrompt)
        {
            cout << "Fisrt name: ";
        }
        stream >> record.FirstName;

        if (isPrompt)
        {
            cout << "Last name: ";
        }
        stream >> record.LastName;

        if (isPrompt)
        {
            cout << "Student ID: ";
        }
        stream >> record.StudentId;

        if (isPrompt)
        {
            cout << "Score: ";
        }
        stream >> record.Score;

        cout << endl;

        return record;
    }

    void WriteRecord(std::fstream &fileStream, const Record &record)
    {
        fileStream.seekp(0, ios_base::end);

        fileStream << record.FirstName << " "
                   << record.LastName << " "
                   << record.StudentId << " "
                   << record.Score << endl;

        fileStream.flush();
    }

    void DisplayRecords(std::fstream &fileStream)
    {
        const string HEADER = "First Name | Last Name | Student ID | Score";
        cout << HEADER << endl;
        cout << std::setw(HEADER.size()) << std::setfill('-') << "" << endl;

        fileStream.seekg(0);
        string line;

        while (true)
        {
            getline(fileStream, line);

            if (fileStream.eof())
            {
                fileStream.clear();
                break;
            }

            cout << line << endl;
        }

        cout << endl;
    }

    void ManageRecords()
    {
        Record record;
        std::fstream fileStream;

        fileStream.open("studentRecords.dat", ios_base::in | ios_base::out | ios_base::app);

        while (true)
        {
            char command = '\0';

            cout << "a: add / d: display / x: exit" << endl;
            cin >> command;
            cin.ignore(LLONG_MAX, '\n');
            cout << endl;

            switch (command)
            {
            case 'a':
                record = ReadRecord(cin, true);

                WriteRecord(fileStream, record);
                break;
            case 'd':
                DisplayRecords(fileStream);
                break;
            case 'x':
                goto exit;

            default:
                cout << "Invalid command" << endl;
                break;
            }
        }

    exit:
        fileStream.close();
    }
}
