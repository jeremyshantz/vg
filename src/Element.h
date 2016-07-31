#pragma once

#include "AttributeMap.h"
#include <vector>
#include <string>
#include <memory>

namespace Xml {

    class ElementList;
    
    class Element {
    
        std::shared_ptr<ElementList> children;
        using HElement = std::shared_ptr<Xml::Element>;
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
        AttributeMap & getAttributes();
    };
}
