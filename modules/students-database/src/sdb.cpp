#include "../include/sdb.h"

sdb::sdb(uint table_size = 1) {
    size = table_size;
	std::vector<students> tmp(table_size);
	table = tmp;
}

bool checkStdExist(std::string first_name, std::string last_name) {
    for (uint i = 0; i < size; i++) {
        if (table[i].last_name == last_name && table[i].first_name == first_name)
            return true;
    }
    return false;
}
