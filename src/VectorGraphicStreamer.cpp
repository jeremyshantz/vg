
#include "VectorGraphicStreamer.h"
#include <iostream>
#include <cctype>

const std::string VectorGraphicXml = R"(
<VectorGraphic closed="true">
<Point x="0" y="0"/>
<Point x="10" y="0">
</Point>
<Point x="10" y="10"/>
<Point x="0" y="10"/>
</VectorGraphic>
)";
    
namespace Xml {

    VectorGraphicStreamer::VectorGraphicStreamer() { }
    VectorGraphicStreamer::~VectorGraphicStreamer() { }
    
    VectorGraphic VectorGraphicStreamer::fromXml(std::stringstream & xml)
    {
         return makeVectorGraphic(xml);
    }
    
    void VectorGraphicStreamer::toXml(const VectorGraphic & vg, std::stringstream& stream)
    {
        stream << "<VectorGraphic closed=\""<< (vg.isClosed() ? "true" : "false")  << "\">" << std::endl;
        
        for (int i = 0; i < vg.getPointCount(); i++)
        {
            stream << getXml(vg.getPoint(i));
        }
        
        stream << "</VectorGraphic>" << std::endl;
    }
    
    VectorGraphic VectorGraphicStreamer::makeVectorGraphic(std::stringstream & xml)
    {
        VectorGraphic vg =  VectorGraphic();
        
        for (std::string line; std::getline(xml, line);)
        {
            if (line.find("<VectorGraphic") != std::string::npos)
            {
                if (vectorIsOpen(line))
                {
                    vg.openShape();
                } else {
                    vg.closeShape();
                }
            }
            else if (line.find("<Point") != std::string::npos)
            {
                vg.addPoint(makePoint(line));
            }
        }
  
        return vg;
    }
    
    bool  VectorGraphicStreamer::vectorIsOpen(std::string line)
    {
        //<VectorGraphic closed="true">
        return line.find("closed=\"true\"") == std::string::npos;
    }
    
    Point VectorGraphicStreamer::makePoint(std::string line)
    {
         // <Point x="0" y="0"/>
        // <Point x="10" y="0">
  
        Parse::trim(line, std::string("<Point />"));
        Parse::trim(line, std::string("x=\""));
        
        std::stringstream num;
        
        for(int i = 0; i < line.size(); i++)
        {
            if (isdigit(line.at(i)))
            {
                num << line.at(i);
                continue;
            }
            Parse::trimStart(line, num.str() + "\" ");
            break;
        }
        
        Parse::trimStart(line, "y=\"");
        
        int x = 0;
        int y = 0;
        num >> x;
        y = atoi(line.c_str());
        Point p{x, y};
        
         return p;
    }
    
    std::string VectorGraphicStreamer::getXml(const Point point)
    {
        std::stringstream stream;
        stream << "<Point x=\"" <<  point.getX()  << "\" y=\"" << point.getY() << "\" />" << std::endl;
        return stream.str();
    }
} 
