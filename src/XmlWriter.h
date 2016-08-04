#pragma once
#include "HElement.h"
#include <ostream>
namespace Xml {

    class Writer {
    public:
        static void writeXml( Xml::HElement, std::ostream&);
    };
}
