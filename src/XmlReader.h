#pragma once

#include "HElement.h"
#include <sstream>
#include <memory>

namespace Xml {

    class Reader {
    public:
        static HElement loadXml(std::stringstream & x);
    private:
//
//        Reader();
//        Reader(const Reader& orig);
//        virtual ~Reader();
    };
}
