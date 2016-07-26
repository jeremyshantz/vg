#pragma once
#include<string>

namespace Xml {

    class AttributeMap {
    public:
        AttributeMap();
        AttributeMap(const AttributeMap& orig);
        virtual ~AttributeMap();
        int size();
        bool empty();
        std::string operator[](std::string);
    private:

    };
}