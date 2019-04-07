#include "include/sdb.h"

sdb::sdb(uint table_size = 1) {
	std::vector<students> tmp(table_size);
	table = tmp;
}

bool sdb::addStudent(std::string first_name, std::string last_name) {
	table.pushback()
}