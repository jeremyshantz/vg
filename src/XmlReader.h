#pragma once

#include "Element.h"
#include "HElement.h"
#include <sstream>
#include <memory>

namespace Xml {

    class Reader {
    public:
        Reader();
        Reader(const Reader& orig);
        virtual ~Reader();
        static  std::unique_ptr<HElement> loadXml(std::stringstream & x);
    private:

    };
}
