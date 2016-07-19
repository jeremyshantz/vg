#include "cppunitlite/TestHarness.h"
#include "src/VectorReader.h"
#include "src/VectorGraphic.h"
#include "src/VectorGraphicStreamer.h"
#include "src/Point.h"
#include <string>

using Xml::VectorReader;
using VG::VectorGraphic;
using Xml::VectorGraphicStreamer;
using VG::Point;
const std::string source("./VectorGraphic.xml");
const std::string destination("./output.xml");

TEST(read_and_write, Driver)
{
    VectorReader reader;
    reader.readAndWrite(source, destination);
    CHECK_EQUAL("Hello", "Hello");
}\

TEST(a, b)
{
    VectorGraphic vg;
    vg.addPoint(Point(1,2));
    vg.addPoint(Point(3,4));
    vg.addPoint(Point(5,6));
    vg.addPoint(Point(7,8));
    vg.addPoint(Point(9,10));
    vg.addPoint(Point(11,12));
    vg.addPoint(Point(13,14));
    vg.addPoint(Point(15,16));
   
    VectorReader r;
    r.save(vg, destination);
    
    
}