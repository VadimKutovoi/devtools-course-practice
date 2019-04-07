#include <vector>
#include <ctime>

using uint = unsigned int;

struct subject
{
    std::string name;
    std::vector<uint> marks;
};

struct student
{
    std::string first_name;
    std::string last_name;
    std::std::vector<subject> subjects;
};


#ifndef SDB
#define SDB

class sdb
{
public:
    sdb(uint table_size = 1); // Creates vector with size table_size;
    
    bool addStudent(std::string first_name, std::string last_name); // Adds student to 
    bool removeStudent(std::string first_name, std::string last_name); // Removes student

    bool addMark(std::string first_name, std::string last_name, std::string subject_name, uint mark); // Adds mark to specified subject

    uint getAvgMark(std::string first_name, std::string last_name); // Returns global avg mark of student 
    uint getAvgMark(std::string first_name, std::string last_name, std::string subject_name); // Returns avg mark of sudent of specified subject

private:
    std::vector<student> table;

    bool checkStdExist(std::string first_name, std::string last_name); 
    uint getRecordPos(std::string first_name, std::string last_name);
};


#endif