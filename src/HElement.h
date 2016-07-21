#pragma once
#include "Element.h"
#include "ElementList.h"

namespace Xml {

    class HElement : public  Element{
    public:
        HElement();
        HElement(const HElement& orig);
        virtual ~HElement();
    private:

    };
}
