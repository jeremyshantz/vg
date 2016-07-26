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
        virtual ElementList getChildElements();
        virtual const std::string getAttribute(const std::string) const;
        virtual AttributeMap getAttributes() const;
        Element operator*();
    private:

    };
    
     class HElement : public  Element{
    public:
        HElement();
        HElement(const HElement& orig);
        virtual ~HElement();
        std::string getName();
        
    private:

    };
}
