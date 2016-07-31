#pragma once

#include "ReadXml.h"
#include "HElement.h"
#include <istream>
#include <iostream>
#include <memory>

namespace Xml {

    class Reader {
    public:
        Reader(std::istream & in) : reader(in) {}
        static HElement loadXml(std::istream &);
        
    private:        
        HElement load();
        void addAttributesAndChildren(HElement & e);
        ReadXml reader;
        int indent = 1;
        bool debug = false;

        inline void log(std::string val) {
            if (!debug) return;
            std::string sp(indent, ' ');
            std::cout << sp << val << std::endl;
        }

        inline void dec() {
            indent -= 2;
        }

        inline void incr() {
            indent += 2;
        }    
    };
}
