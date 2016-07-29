/*
Copyright (C) 2016. Sundeep Bhatia. All Rights Reserved.

Project - Assignment1
File - VectorGraphicStreamer.cpp
Created - 7/17/2016 - Sundeep Bhatia
*/
// Project
#include "Parse.h"                      // Parse::eat, Parse::trim
#include "VectorGraphicStreamer.h"      // VG::VectorGraphic
// C++ Std Library
#include <iostream>                     // std::istream, std::ostream, std::ios::exceptions, ios::ios_base:*bit
#include <string>

#include<sstream>

using std::runtime_error;
using std::string;

namespace {
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
//            Parse::trim(name, std::string("<"));
//            std::cout << name << std::endl;
//            
            return true;
        }
        void skipEndElement() {
            Parse::eat(in);
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

namespace VG {
    void VectorGraphicStreamer::toXml(const VectorGraphic& vg, std::ostream& out)
    {
        out << R"(<VectorGraphic closed=")" << std::boolalpha << vg.isClosed() << R"(">)" << std::endl;
        for (auto i = 0; i < vg.getPointCount(); ++i) {
            auto point = vg.getPoint(i);
            out << R"(<Point x=")" << point.getX() << R"(" y=")" << point.getY() << R"("/>)" << std::endl;
        }
        out << R"(</VectorGraphic>)";
    }

    VectorGraphic VG::VectorGraphicStreamer::fromXml(std::istream& in)
    {
        in.exceptions(std::ios_base::eofbit | std::ios_base::failbit | std::ios_base::badbit);
        string name;
        ReadXml rx(in);
        if (!rx.getElement(name)) {
            throw std::runtime_error{"Invalid XML: bad char"};
        }
        if (name != "VectorGraphic") {
            throw std::runtime_error{"Invalid XML: expected tag VectorGraphic got " + name};
        }
        string value;
        VectorGraphic vg;
        while (rx.getAttribute(name, value)) {
            if (name == "closed") {
                if (value == "true") { vg.closeShape(); }
                else if (value == "false") { vg.openShape(); }
                else throw std::runtime_error{"Invalid XML : closed : unexpected attribute " + value};
            }
        }
        rx.skipEndElement();
        while (rx.getElement(name)) {
            if (name == "Point") {
                bool sawX = false, sawY = false;
                int x{0}, y{0};
				string attr;
                while (rx.getAttribute(attr, value)) {
                    if (attr == "x") { sawX = true; x = atoi(value.c_str()); }
                    else if (attr == "y") { sawY = true; y = atoi(value.c_str()); }
                    if (sawX && sawY) vg.addPoint(Point(x, y));
                }
            }
            else if (name == "/VectorGraphic") break;
			rx.skipEndElement();
		}
        return vg;
    }
} // namespace VG