// Copyright 2019 Kutovoi Vadim

#include <unordered_map>
#include <vector>
#include <ctime>


struct student
{
    std::string first_name;
    std::vector<int> marks;
};


#ifndef STUDENT_DATA_BASE
#define STUDENT_DATA_BASE

using uint = unsigned int;

class Sdb
{
public:
    Sdb() = default;
    Sdb(Sdb&&) = default;

    inline bool AddStudent(std::string& first_name, std::string& last_name);
    inline bool RemoveStudent(std::string&);
    inline bool AddMark(std::string&, uint);

    inline float GetAvgMark(std::string&);

    inline uint GetNumberOfStudents();
    inline uint GetNumberOfGoodStudents();
    inline uint GetNumberOfBadStudents();

private:
    uint size_ = 0;

    std::unordered_map<std::string, student> table;

    bool CheckStdExist(std::string&);
};

#endif
