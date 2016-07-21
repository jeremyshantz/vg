#pragma once

#include "AttributeMap.h"
#include "ElementList.h"
#include <vector>
#include <string>

namespace Xml {
  
    class ElementList ;
    
    class Element {
    public:
        Element();
        Element(const Element& orig);
        virtual ~Element();
        ElementList getChildElements();
        const std::string getAttribute(const std::string) const;
        AttributeMap getAttributes() const;
        Element operator*();
    private:

    };
}
