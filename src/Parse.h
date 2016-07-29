#pragma once

#include <string>
#include <sstream>

using std::string;

namespace Parse
{
        void trim(string& source, const string& trimmables = " \t\n\r\f\v");
        void eat(std::istream& stream, const string& edibles = " \t\n\r\f\v");
    
    //void trim(std::string& txt);
   // void trim(std::string& txt, std::string const& chars);
    void trimStart(std::string& txt, const std::string& chars);
    void trimTrailing(std::string& txt, const std::string& chars);
   // void eat(std::istream& txt);
    //void eat(std::istream& txt, std::string const& chars);
}