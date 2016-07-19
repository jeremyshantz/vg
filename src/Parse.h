#pragma once

#include <string>
#include <sstream>

namespace Xml { namespace Parse {
    void trim(std::string & txt);
    void trim(std::string& txt, std::string const& chars);
    void trimStart(std::string& txt, const std::string& chars);
    void trimTrailing(std::string& txt, const std::string& chars);
    void eat(std::istream& txt, std::string const& chars = " \t\n\f\v\r");
}}