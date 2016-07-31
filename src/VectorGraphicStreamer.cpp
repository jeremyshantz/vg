/*
Copyright (C) 2016. Sundeep Bhatia. All Rights Reserved.

Project - Assignment1
File - VectorGraphicStreamer.cpp
Created - 7/17/2016 - Sundeep Bhatia
*/
// Project
#include "Parse.h"                      // Parse::eat, Parse::trim
#include "VectorGraphicStreamer.h"      // VG::VectorGraphic
#include "ReadXml.h"
// C++ Std Library
#include <iostream>                     // std::istream, std::ostream, std::ios::exceptions, ios::ios_base:*bit
#include <string>
#include<sstream>

using Xml::ReadXml;
using std::runtime_error;
using std::string;

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