#pragma once
#include "Element.h"
#include <ostream>
namespace Xml {

    class Writer {
    public:
        Writer();
        Writer(const Writer& orig);
        virtual ~Writer();
        static void writeXml( Xml::HElement, std::ostream&);
    private:

    };
}
