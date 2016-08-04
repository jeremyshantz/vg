
#include "XmlWriter.h"
#include "ElementList.h"
#include <algorithm>
#include <string>

using Pair = std::pair<std::string, std::string>;

namespace Xml {

    void Writer::writeXml(Xml::HElement e, std::ostream & out)
    {
        out << R"(<)" << e->getName();
        
        AttributeMap attrs = e->getAttributes();
        std::for_each(attrs.begin(), attrs.end(), [&out](const Pair pair){
            out << " " << pair.first << R"(=")" << pair.second << R"(")";
        });
        
        if (e->getChildElements().size() == 0) {
        
            out << R"(/>)";
            return;
        }
        
        out << ">";
        std::for_each(e->begin(), e->end(), [&out](Xml::HElement & c){writeXml(c, out);});
        out << R"(</)" << e->getName() << ">";
    }
}
