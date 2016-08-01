#include "cppunitlite/TestHarness.h"
#include "src/Layer.h"
#include "src/HVectorGraphic.h"
#include <algorithm>

using Framework::Layer;
using pg = Framework::PlacedGraphic;

TEST(can_be_copied_faithfully, Layer)
{
    Layer l("l");
    pg pg1;
    
    VG::VectorGraphic * vgo = new VG::VectorGraphic();
    HVectorGraphic g1(vgo);
    
    VectorGraphic vg = g1.get();
    CHECK_EQUAL(*vgo, vg);
    
    pg1.setGraphic(g1);
    CHECK_EQUAL(*vgo, pg1.getGraphic());
    
    l.add(pg1);
    CHECK_EQUAL(1, std::distance(l.begin(), l.end()));
     
    Framework::PlacedGraphicIterator i = l.begin();
    auto gg = i->getGraphic();
    
    return;
}