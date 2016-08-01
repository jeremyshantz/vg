#pragma once

/*
Copyright (C) 2016. Sundeep Bhatia. All Rights Reserved.

Project - Assignment1
File - VectorGraphicStreamer.cpp
Created - 7/17/2016 - Sundeep Bhatia
*/
#include "Parse.h"
#include <sstream>

namespace Xml {
class ReadXml {
    public:
        ReadXml(std::istream& xml) : in(xml) {}
        void getName(string& name, char delim)
        {
            Parse::eat(in);
            name.clear();
            while (in.get(ch) && !isspace(ch)) {
                if (ch == delim) { in.unget(); break; }
                name.push_back(ch);
            }
            Parse::trim(name);
        }
        bool getValue(string& value)
        {
            Parse::eat(in);
            value.clear();
            if (in.get(ch) && ch != '"') return false;
            while (in.get(ch) && ch != '"') {
                value.push_back(ch);
            }
            return true;
        }
        bool getElement(string& name) {
            
            Parse::eat(in);
            name.clear();
            in.get(ch);
            if (ch != '<') return false;
            getName(name, '>');
            return true;
        }
        
        char peek()
        {
            return in.peek();
        }
        
        bool atAndOfSelfClosingTag() {
            
            Parse::eat(in);
            in.get(ch);
            
            if (ch == '/') {
            
                in.get(ch);
                bool ret = ch == '>';
                in.unget().unget();
                return ret;
            }
            
            in.unget();
            return false;
        }
        
        void skipComment() {
            
            Parse::eat(in);
            std::stringstream stream;
            
            while (stream.str().find("-->") == -1) {
                in.get(ch);
                stream << ch;
            }
            
        }
        
        void skipEndElement() {
            Parse::eat(in);
            Parse::eat(in, ">");
            Parse::eat(in, "/>");
        }
        bool getAttribute(string& name, string& value) {
            Parse::eat(in);
            ch = in.peek();
            if (ch == '/' || ch == '>') return false;
            getName(name, '=');
            Parse::eat(in, "=");
            return getValue(value);
        }
    private:
        char ch;
        std::istream& in;
    };
}