/*
Copyright (C) 2016. Sundeep Bhatia. All Rights Reserved.

Project - Assignment1
File - Parse.cpp
Created - 7/17/2016 - Sundeep Bhatia
*/
// Project
//#include "/home/jshantz/NetBeansProjects/aAssignment1_solution/Parse.h"
#include "Parse.h"
using std::next;
namespace Parse {
    void trim(string& source, const string& trimmables) {
        auto first = source.find_first_not_of(trimmables);
        if (first == string::npos) {
            source.clear();
            return;
        }
        auto last = source.find_last_not_of(trimmables);
        source = source.substr(first, last - first + 1);
    }

    void eat(std::istream& in, const string& edibles) {
        for (std::basic_istream<char>::int_type next{EOF}; (next = in.peek()) != EOF; in.ignore())
            if (edibles.find_first_of(next) == string::npos) return; // non-edible found
    }
} // namespace Parse