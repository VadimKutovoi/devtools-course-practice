// Copyright 2019 Kutovoi Vadim

#include "../include/sdb.h"

bool Sdb::FindStudent(std::string& last_name) {
	auto rec = table.find(*last_name);

	if (rec == table.end())
		return false;
	else
		return true;
}

bool Sdb::AddStudent(std::string& first_name, std::string& last_name) {
	student st = { *first_name };

	return table.insert(std::make_pair(*last_name, st)).second;
}

bool Sdb::RemoveStudent(std::string& last_name) {
	auto rec = table.find(*last_name);

	if (rec == table.end())
		return false;
	else {
		table.erase(itr);
		return true;
	}
}

bool Sdb::AddMark(std::string& last_name, std::string& subject_name, uint mark) {
	auto rec = table.find(*last_name);

	if (rec == table.end())
		return false;
	else {
	
	}
}
