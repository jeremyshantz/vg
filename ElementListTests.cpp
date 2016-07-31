#include "cppunitlite/TestHarness.h"
#include "src/ElementList.h"

using namespace Xml;
using Xml::ElementList;

TEST(elementList, test) {
    
    HElement e = make_HElement("name");
    
    ElementList l;
    l.add(e);
    
    CHECK(!l.empty());
    CHECK_EQUAL(1, l.size());
}

TEST(elementList, viaElement) {

    HElement e = make_HElement("name");
    HElement e2 = make_HElement("name2");

    e->getChildElements().add(e2);
    e->getChildElements().add(e2);

    CHECK(!e->getChildElements().empty());
    CHECK_EQUAL(2, e->getChildElements().size());
}
        
        