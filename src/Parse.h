#pragma once

#include <string>
#include <sstream>

using std::string;

namespace Parse
{
    void trim(string& source, const string& trimmables = " \t\n\r\f\v");
    void eat(std::istream& stream, const string& edibles = " \t\n\r\f\v");
}