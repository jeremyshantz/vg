#pragma once
#include "HElement.h"
#include <memory>
#include <vector>
namespace Xml {

    class ElementList {
    public:
        ElementList();
        ElementList(const ElementList& orig);
        virtual ~ElementList();
        const int size() const;
        const bool empty() const ;
        void add(const HElement &);
        HElement operator[](int);
        std::vector<HElement>::iterator begin();
        std::vector<HElement>::iterator end();
    private:
        std::vector<HElement> elements;
    };
}
