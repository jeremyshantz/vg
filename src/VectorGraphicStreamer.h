#pragma once

#include "VectorGraphic.h"
#include "Parse.h"
#include "Point.h"
#include <sstream>

using VG::Point;
using  VG::VectorGraphic;

namespace Xml {
    
    class VectorGraphicStreamer {
    public:
        virtual ~VectorGraphicStreamer();
        static VectorGraphic fromXml(std::stringstream & xml);
        static void toXml(const VectorGraphic & vg, std::stringstream& stream);
    private:
        VectorGraphicStreamer();
         static VectorGraphic  makeVectorGraphic(std::stringstream & xml);
         static bool  vectorIsOpen(std::string line);
         static Point  makePoint(const std::string line);
         static std::string getXml(const Point point);
    };
}
