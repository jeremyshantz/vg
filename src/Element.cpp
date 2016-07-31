#include "ElementList.h"
#include "Element.h"

namespace Xml {

    Element::Element(std::string name) 
    : name{ name}, map{}
    {
        children = std::make_shared<ElementList>();
    }

    Element::Element(const Element& orig)
    : name { orig.name}, map{orig.map} 
    {
        children = std::make_shared<ElementList>();
    }

    Element::~Element() {
    }
    
    AttributeMap & Element::getAttributes() 
    {\
        return map;
    }
    const std::string Element::getName() const
    {
        return name;
    }

     ElementList & Element::getChildElements()
    {
        return *children;
    }
    
    const std::string Element::getAttribute(const std::string attr)
    {
        return map.find(attr) != map.end() ? map[name] : std::string();
    }
    
    void Element::addAttribute(const std::string attr, const std::string val)
    {
        map.insert(std::pair<std::string, std::string>(attr, val));
    }
}
