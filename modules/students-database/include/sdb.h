// Copyright 2019 Kutovoi Vadim

#include <unordered_map>
#include <vector>
#include <ctime>


struct subject
{
    std::string name;
    std::vector<uint> marks;
};

struct student
{
    std::string first_name;
    std::vector<subject> subjects;
};


#ifndef SDB
#define SDB

class Sdb
{
public:
    Sdb() = default;
	Sdb(Sdb&&) = default;

	bool IsStudentExists(std::string&);
    bool AddStudent(std::string&, std::string&);
    bool RemoveStudent(std::string&);
    bool AddMark(std::string&, std::string&, uint);

	uint GetAvgMark(std::string&);
    uint GetAvgMark(std::string&, std::string&);

private:
	using uint = unsigned int;

    uint size = 0;

    std::unordered_map<string, student> table;

    bool CheckStdExist(std::string&);
};


#endif