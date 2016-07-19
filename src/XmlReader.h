#pragma once

#include "Element.h"
#include <sstream>

namespace Xml {

    class Reader {
    public:
        Reader();
        Reader(const Reader& orig);
        virtual ~Reader();
         static  Xml::Element * loadXml(std::stringstream & x);
    private:

    };
}
