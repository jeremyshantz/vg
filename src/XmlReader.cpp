
#include "XmlReader.h"
#include <memory>

namespace Xml {

    Reader::Reader() {
    }

    Reader::Reader(const Reader& orig) {
    }

    Reader::~Reader() {
    }
    
    std::unique_ptr<HElement> Reader::loadXml(std::stringstream & x)
    {

    }
    
}
