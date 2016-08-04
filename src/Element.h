#pragma once

#include "AttributeMap.h"
#include <vector>
#include <string>
#include <memory>
#include <ostream>

namespace Xml {

    class ElementList;
    
    class Element {
    
        using HElement = std::shared_ptr<Xml::Element>;
        
        std::shared_ptr<ElementList> children;
        AttributeMap map;
        std::string name;
        
    public:
        Element(std::string);
        Element(const Element&);
        ~Element();
        const std::string getName() const;
        ElementList & getChildElements();
        void addAttribute(const std::string, const std::string);
        const std::string getAttribute(const std::string);
        const int getAttributeInt(const std::string);
        const bool getAttributeBool(const std::string);
        AttributeMap & getAttributes();
        std::vector<HElement>::iterator begin();
        std::vector<HElement>::iterator end();
    };    
}
