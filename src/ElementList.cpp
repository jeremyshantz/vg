#include "Element.h"
#include "ElementList.h"

namespace Xml {

    ElementList::ElementList() {}
 
    ElementList::ElementList(const ElementList& orig)
    : elements(orig.elements)
    {}
    
    ElementList::~ElementList() {
    }
    
    void ElementList::add(const HElement & e)
    {
        elements.push_back(e);
    }
    
    const int ElementList::size() const
    {
        return elements.size();
    }

    const bool ElementList::empty() const
    {
        return elements.empty();
    }
    
    HElement ElementList::operator[](int i)
    {
        return elements[i];
    }

    std::vector<HElement>::iterator ElementList::begin()
    {
        return elements.begin();
    }
    
    std::vector<HElement>::iterator ElementList::end()
    {
        return elements.end();
    }
}
