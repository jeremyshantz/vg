#pragma once
#include "Element.h"

namespace Xml {

    class Element;
    
    class ElementList {
    public:
        ElementList();
        ElementList(const ElementList& orig);
        virtual ~ElementList();
        int size();
        Element & operator[](int);
    private:

    };
}
