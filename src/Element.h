#pragma once

#include "AttributeMap.h"
//#include "ElementList.h"
#include <vector>
#include <string>
#include <memory>

namespace Xml {
    
    class Element {
    public:
        Element();
        Element(const Element& orig);
        ~Element();
        const std::string getName() const;
       // ElementList getChildElements();
        const std::string getAttribute(const std::string) const;
        AttributeMap getAttributes() const;
        Element operator*();
    private:

    };
}
