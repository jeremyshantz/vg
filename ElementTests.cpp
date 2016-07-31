#include "src/Element.h"
#include "cppunitlite/TestHarness.h"

using Xml::Element;

TEST(Element, test)
{
    Element e("test");
    e.addAttribute("a", "b");
    CHECK_EQUAL(1, e.getAttributes().size());
    CHECK_EQUAL("b", e.getAttribute("a"));
    CHECK_EQUAL("test", e.getName());
}