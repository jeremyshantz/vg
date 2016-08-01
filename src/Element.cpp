#include "ElementList.h"
#include "Element.h"
#include <iostream>
#include <algorithm>

#include "Layer.h"

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
        return map.contains(attr) ? map[attr] : std::string();
    }
    
    // re-implement as template function
    const int Element::getAttributeInt(const std::string attr)
    {
        std::string val = map.contains(attr) ? map[attr] : std::string();
        
        if (val.empty()) return -1;
        return atoi(val.c_str());
    }
    
    const bool Element::getAttributeBool(const std::string attr)
    {
        std::string val = map.contains(attr) ? map[attr] : std::string();
        return val == "true";
    }
    
    void Element::addAttribute(const std::string attr, const std::string val)
    {
        map.add(attr, val);
    }
    
    void Element::print(std::ostream& o)
    {
        o << getName() << std::endl;
       map.print(o);
        
        auto el = getChildElements();
        
        for(int i = 0; i < el.size(); ++i) {
            el[i]->print(o);
        }
    }
    
    std::vector<HElement>::iterator Element::begin()
    {
        return children->begin();
    }
    
    std::vector<HElement>::iterator Element::end()
    {
        return children->end();
    }
}
