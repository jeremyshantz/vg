#pragma once
#include "HElement.h"
#include <memory>

namespace Xml {

    class ElementList {
    public:
        ElementList();
        ElementList(const ElementList& orig);
        virtual ~ElementList();
        int size();
        bool empty();
        HElement operator[](int);
    private:

    };
}
