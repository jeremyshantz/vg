#pragma once
#include "Element.h"
#include "HElement.h"
#include <memory>

namespace Xml {

    class Element;
    class HElement;
    
    class ElementList {
    public:
        ElementList();
        ElementList(const ElementList& orig);
        virtual ~ElementList();
        int size();
        bool empty();
        std::unique_ptr<HElement> operator[](int);
    private:

    };
}
