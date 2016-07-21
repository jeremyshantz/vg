#pragma once

namespace Xml {

    class AttributeMap {
    public:
        AttributeMap();
        AttributeMap(const AttributeMap& orig);
        virtual ~AttributeMap();
        int size();
        bool empty();
    private:

    };
}